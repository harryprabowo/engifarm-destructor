#include <CUnit/CUnit.h>
#include <CUnit/Basic.h>
#include <string>
#include <map>

#include "test1.cpp" //include every test file

using namespace std;

static FILE* temp_file = NULL;


int init_suite(void)
{
   if (NULL == (temp_file = fopen("test_result.txt", "w+"))) {
      return -1;
   }
   else {
      return 0;
   }
}

int clean_suite(void)
{
   if (0 != fclose(temp_file)) {
      return -1;
   }
   else {
      temp_file = NULL;
      return 0;
   }
}

int main(){
	  CU_pSuite pSuite = NULL;

  	if (CUE_SUCCESS != CU_initialize_registry()){
        return CU_get_error();
  	}

	  pSuite = CU_add_suite("Suite", init_suite, clean_suite);
    if (NULL == pSuite) {
       CU_cleanup_registry();
       return CU_get_error();
    }

    string tests[] = {"test1"};//add all functions to this

    map<string,void(*)()> functions;
    functions["test1"] = test1;//duplicate this and replace name

    for(string test : tests){
      if(NULL == CU_add_test(pSuite, "test of test1()", functions[test])){
        CU_cleanup_registry();
        return CU_get_error();
      }
    }

    CU_basic_set_mode(CU_BRM_VERBOSE);
    CU_basic_run_tests();
    CU_cleanup_registry();
    return CU_get_error();
}