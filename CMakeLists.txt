cmake_minimum_required(VERSION 3.28)
project(final_sem)

set(CMAKE_CXX_STANDARD 17)

add_executable(final_sem cls_and_obj.cpp
        access_specifiers.cpp
        manipulators.cpp
        string_input.cpp
        string_input_oop.cpp
        string_manipualtors.cpp
        2d_array_io.cpp
        matrix_addition.cpp
        func_overloading_dpt.cpp
        func_overloading_dnp.cpp
        inline_func.cpp
        friend_func.cpp
        friend_cls.cpp
        constructor.cpp
        destructor.cpp
        friendfunc_cons_des.cpp
        friendcls_friendfunc_cons_des.cpp
        single_inherit.cpp
        multiple_inherit.cpp
        multilevel_inherit.cpp
        hierarchichal_inherit.cpp
        hybrid_inherit.cpp
        virtual_func.cpp
        operator_overload.cpp
        pointer_arith.cpp
        aop_to_v.cpp
        aop_to_s.cpp
        memory_alloc.cpp
        function_template.cpp
        class_template.cpp
        exception_handling.cpp)
