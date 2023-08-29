#include "test.h"

int main(void) {
  int failed = 0;
  Suite *viewer_test[] = {parser_test(), affine_tr_test(), NULL};

  for (int i = 0; viewer_test[i] != NULL; i++) {
    SRunner *sr = srunner_create(viewer_test[i]);

    srunner_set_fork_status(sr, CK_NOFORK);
    srunner_run_all(sr, CK_NORMAL);

    failed += srunner_ntests_failed(sr);
    srunner_free(sr);
  }
  printf("========= FAILED: %d =========\n", failed);

  return failed == 0 ? 0 : 1;
}
