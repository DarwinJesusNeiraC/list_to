add_test( LisTest.IsEmpty /home/darwin/unsa/to/lab/list/build/List [==[--gtest_filter=LisTest.IsEmpty]==] --gtest_also_run_disabled_tests)
set_tests_properties( LisTest.IsEmpty PROPERTIES WORKING_DIRECTORY /home/darwin/unsa/to/lab/list/build)
add_test( LisTest.WhenHead /home/darwin/unsa/to/lab/list/build/List [==[--gtest_filter=LisTest.WhenHead]==] --gtest_also_run_disabled_tests)
set_tests_properties( LisTest.WhenHead PROPERTIES WORKING_DIRECTORY /home/darwin/unsa/to/lab/list/build)
add_test( LisTest.WhenTail /home/darwin/unsa/to/lab/list/build/List [==[--gtest_filter=LisTest.WhenTail]==] --gtest_also_run_disabled_tests)
set_tests_properties( LisTest.WhenTail PROPERTIES WORKING_DIRECTORY /home/darwin/unsa/to/lab/list/build)
set( List_TESTS LisTest.IsEmpty LisTest.WhenHead LisTest.WhenTail)
