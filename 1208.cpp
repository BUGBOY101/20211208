#define	_CRT_SECURE_NO_WARNINGS 1



//#include<iostream>
//using namespace std;
//int my_sqrt(int x) {
//	int low = 0, high = x, mid=0;
//	if (x <= 1)
//		return x;
//	while (low <= high) {
//		mid = (low + high) / 2;
//		
//		if (mid < x / mid)
//			low = mid + 1;
//		else
//			high = mid - 1;
//	}
//	return mid;
//}
//int main() {
//	int x;
//	cin >> x;
//	cout << my_sqrt(x) << endl;
//}

//选择排序+冒泡排序

//#include<iostream>
//using namespace std;
//int main() {
//	int a[10] = { 1,2,5,6,3,4,9,20,23,45 }, i, j;
//	/*for (i = 0; i < 9; i++) {
//		for (j = i+1; j < 10; j++) {
//			if (a[i] > a[j]) {
//				int temp = a[i];
//				a[i] = a[j];
//				a[j] = temp;
//			}
//		}
//	}*/
//	for (i = 0; i < 9; i++) {
//		for (j = 0; j < 10 - 1 - i; j++) {
//			if (a[j] > a[j + 1]) {
//				int temp = a[j];
//				a[j] = a[j + 1];
//				a[j + 1] = temp;
//			}
//		}
//	}
//
//	for (i = 0; i < 10; i++)
//		cout << a[i] << " ";
//	cout << endl;
//}

//牛顿迭代法-直线趋于曲线

//#include<iostream>
//using namespace std;
//int my_sqrt(double x) {
//	if (x <= 0)
//		return 0;
//	int r = x;
//	while (r > x / r) {
//		r = (r + x / r) / 2;
//	}
//	return r;
//}
//int main() {
//	double x;	
//	cin >> x;
//	cout << my_sqrt(x) << endl;
//}

//有问题

//#include<iostream>
//#include<cstring>
//using namespace std;
//int main() {
//	char s1[200], s2[200];
//	int a[200], b[200], c[200];
//	memset(a, 0, sizeof(a));
//	memset(b, 0, sizeof(b));
//	memset(c, 0, sizeof(c));
//	cin >> s1 >> s2;
//	int i, j, la, lb, l;
//	/*if (strcmp(s1, s2) < 0) {
//		strcat(s2, s1);
//	}*/
//	la = strlen(s1), lb = strlen(s2);
//	for (i = la - 1, j = 0; i >= 0; i--, j++)
//		a[j] = s1[i] - '0';
//	for (i = lb - 1, j = 0; i >= 0; i--, j++)
//		b[j] = s2[i] - '0';
//	l = la > lb ? la : lb;
//	for (i = 0; i < l; i++) {
//		c[i] += a[i] - b[i];
//		if (c[i] < 0) {
//			c[i + 1] -= 1;
//			c[i] += 10;
//		}
//	}
//	for (i = l; i > 0; i--) {
//		if (c[i] == 0)
//			continue;
//		else
//			break;
//	}
//	for (; i >= 0; i--)
//		cout << c[i];
//	cout << endl;
//}

//#include<iostream>
//#include<math.h>
//using namespace std;
//int main() {
//	int M, N, X;
//	cin >> M >> N >> X;
//	while (X > 0) {
//		if (X < ceil(1.0 * M / N))
//			break;
//		X -= ceil(1.0 * M / N);
//		N += M / N;
//	}
//	cout << N << endl;
//}

//#include<iostream>
//using namespace std;
//int i = 5;
//void f(int n) {
//	for (int i = 0; i < n; i++)
//		cout << "*";
//	cout << endl;
//}
//int main() {
//	f(i);
//}