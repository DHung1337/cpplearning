//! Giờ mới nhớ ra là quên chưa nộp bài=)))
//! Discord xoá lâu rồi có gì nhắn qua mes nha

/* CÁC ĐIỂM CHƯA TỐI ƯU
- Xử lý đầu vào nếu nó có chứa chữ cái (khi std::cin với choose, a, b)
- Sai số với số lớn (long long, long double) - do cách hoạt động của kiểu dữ liệu và bộ nhớ
- Giới hạn của kiểu dữ liệu (có kỹ thuật sử dụng mảng để làm phép tính với số rất lớn)
- Thêm các trường hợp sử dụng dấu phẩy khác nhau (5.4 hoặc 5,4)
- Vấn đề với dấu phẩy thập phân
*/

#include <iomanip>
#include <iostream>

namespace cst {
    void input(int choice, long double &a, long double &b) {
        std::cout << "a = ";
        std::cin >> a;
        std::cout << "b = ";
        std::cin >> b;
    }
}  // namespace cst

int main() {
    std::cout << "\n";
    std::cout << "1. Cong | 2. Tru | 3. Nhan | 4. Chia | 5. Thoat\n";

    std::cout << std::fixed;

    int choice{};

    do {
        std::cout << "\n";

        std::cout << "Chuc nang: ";
        std::cin >> choice;

        long double a{}, b{};

        switch (choice) {
            case 1:
                cst::input(choice, a, b);
                std::cout << "Ket qua: a + b = " << a + b << '\n';
                break;
            case 2:
                cst::input(choice, a, b);
                std::cout << "Ket qua: a - b = " << a - b << '\n';
                break;
            case 3:
                cst::input(choice, a, b);
                std::cout << "Ket qua: a * b = " << a * b << '\n';
                break;
            case 4:
                cst::input(choice, a, b);
                std::cout << "Ket qua: a / b = " << a / b << '\n';
                break;
            case 5:
                std::cout << "\n";
                break;
            default:
                std::cout << "Lua chon khong hop le!\n";
        }
    } while (choice != 5);

    return 0;
}
