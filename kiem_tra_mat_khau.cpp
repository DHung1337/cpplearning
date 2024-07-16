// Kiểm tra mật khâu xem nó là mật khẩu mạnh hay yếu

// Các yêu cầu
// - Tối thiểu 6 ký tự
// - Có ít nhất 1 ký tự viết hoa
// - Có ít nhất 1 ký tự viết thường
// - Có ít nhất 1 ký tự số
// - Có ít nhất 1 ký tự đặc biệt

#include <iostream>
#include <string>

int main() {
    std::string input{};
    std::getline(std::cin >> std::ws, input);

    int len{std::size(input)};

    if (len < 6) {
        std::cout << "KHONG";
        return 0;
    }

    bool dk2{}, dk3{}, dk4{}, dk5{};
    for (char i : input) {
        if (!dk2) {
            if (i >= 'A' && i <= 'Z') {
                dk2 = true;
            }
        }
        if (!dk3) {
            if (i >= 'a' && i <= 'z') {
                dk3 = true;
            }
        }
        if (!dk4) {
            if (i >= '0' && i <= '9') {
                dk4 = true;
            }
        }
        if (!dk5) {
            if ((i >= '!' && i <= '/') || (i >= ':' && i <= '@') || (i >= '[' && i <= '`') || i >= '{' && i <= '~') {
                dk5 = true;
            }
        }
        if (dk2 == true && dk3 == true && dk4 == true && dk5 == true) {
            std::cout << "DUNG";
            return 0;
        }
    }

    std::cout << "KHONG";
    return 0;
}
