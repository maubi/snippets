#include <stdio.h>
#include <CUnit/CUnit.h>
#include <CUnit/Basic.h>
#include "simple.h"

void test_multiply(void);
void test_findAt(void);

void test_multiply(void) {
	CU_ASSERT(multiply(2,2) == 4);
	CU_ASSERT(multiply(3,2) == 6);
	CU_ASSERT(multiply(-3,4) == -12);
}

void test_findAt(void) {
	CU_ASSERT_PTR_NOT_NULL(findAt("Lain", 'a'));
	CU_ASSERT_PTR_NULL(findAt("Lain", 'c'));
}

int init_suite1(void) {
	return 0;
}

int cleanup_suite1(void) {
	return 0;
}

int main(int argc, char *argv[]) {
	if (CU_initialize_registry()) {
		printf("Error: cannot initialize registry!\n");
		return 1;
	} else {
		printf("OK: registry initialized\n");
	}

	CU_basic_set_mode(CU_BRM_VERBOSE);

	CU_pSuite suite1 = CU_add_suite("suite1", init_suite1, cleanup_suite1);

	if (!suite1) {
		printf("Error: cannot add suite!\n");
		return 1;
	} else {
		printf("OK: suite added\n");
	}

	if(!CU_add_test(suite1, "test_multiply", test_multiply)) {
		printf("Error: cannot add test\n");
		return 1;
	} else {
		printf("OK: test added\n");
	}

	if(!CU_add_test(suite1, "test_findAt", test_findAt)) {
		printf("Error: cannot add test\n");
		return 1;
	} else {
		printf("OK: test added\n");
	}

	if(CU_basic_run_suite(suite1)) {
		printf("Error: cannot run suite\n");
		return 1;
	} else {
		printf("OK: suite successfully run\n");
	}

	CU_cleanup_registry();
	return 0;
}






