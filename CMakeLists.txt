cmake_minimum_required(
	VERSION 3.28.3
)

set(
	PROJECT_NAME
	cevolution
)

project(
	${PROJECT_NAME}
)

set(
	CMAKE_CXX_STANDARD 20
)

add_subdirectory(
	./src
)
