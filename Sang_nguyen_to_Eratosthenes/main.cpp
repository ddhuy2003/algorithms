/*
THUAT TOAN:
1. Lập một danh sách các số liên tiếp từ 2 đến n
2. Bước đầu tiên ta đặt số a = 2
3. Lần lượt đánh dấu các số a*a, a*(a+1), a*(a+2), ... có trong danh sách mình đã tạo trước. Nếu như a*a > n thì ta kết thúc thuật toán.
4. Tìm số đầu tiên lớn hơn a chưa được đánh dấu trong danh sách. Nếu không tìm thấy thì kết thúc thuật toán, ngược lại thì gán a bằng số đó và lặp lại bước 3 

=> Độ phức tạp: O( nlog(n) )
*/

#include <iostream>

using namespace std;

bool mark[1002]; // --> buoc 1

//ham kiem tra so nguyen to
bool isPrime(int n) {
    if(n < 1) return false; //neu n < 1 thi ket luan khong phai so nguyen to
    int a = 2; // --> buoc 2
    //--> buoc 3
    while(true) {
        if (a*a > n) break;
        int p = a*a;
        while (p <= n) {
            mark[p] = true;
            p += a;
        }
        ++a;
        while (a <= n && mark[a]) ++a;
        if (a > n) break;
    }
    return (mark[n]) ? false : true;
}

int main(){
	
    cout << isPrime(17);

    cout << "hello";

	cout << endl;
	return 0;
}