set(
	TEST_EXECUTABLE_NAME
	test
)

add_executable(
	${TEST_EXECUTABLE_NAME}
	./main.cpp	
)


target_link_libraries(
	${TEST_EXECUTABLE_NAME}
	GTest::gtest_main
)
