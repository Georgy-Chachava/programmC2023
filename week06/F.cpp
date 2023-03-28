#include <iostream>
#include <string>

enum Status {
    Continue = 100,
    OK = 200,
    Created = 201,
    Accepted = 202,
    Bad_Request = 400,
    Unauthorized = 401,
    Not_Found = 404,
    Method_Not_Allowed = 405,
    Internal_Server_Error = 500,
    Not_Implemented = 501,
    Bad_Gateway = 502
};

void print(int n) {
    if (n == Status::Continue) {
        std::cout << "Continue" << std::endl;
    }
    if (n == Status::OK) {
        std::cout << "OK" << std::endl;
    }
    if (n == Status::Created) {
        std::cout << "Created" << std::endl;
    }
    if (n == Status::Accepted) {
        std::cout << "Accepted" << std::endl;
    }
    if (n == Status::Bad_Request) {
        std::cout << "Bad Request" << std::endl;
    }
    if (n == Status::Unauthorized) {
        std::cout << "Unauthorized" << std::endl;
    }
    if (n == Status::Not_Found) {
        std::cout << "Not Found" << std::endl;
    }
    if (n == Status::Method_Not_Allowed) {
        std::cout << "Method Not Allowed" << std::endl;
    }
    if (n == Status::Internal_Server_Error) {
        std::cout << "Internal Server Error" << std::endl;
    }
    if (n == Status::Not_Implemented) {
        std::cout << "Not Implemented" << std::endl;
    }
    if (n == Status::Bad_Gateway) {
        std::cout << "Bad Gateway" << std::endl;
    }
}

int main() {
    int a = -5;
    bool b = true;
    while (b == true) {
        std::cin >> a;
        if (a == 0) {
            b = false;
        }
        print(a);
    }
    return 0;
}
