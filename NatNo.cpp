#include <stdio.h>

#pragma warning(disable: 4996 4326 6001 6031)

typedef int NatNo;

NatNo Zero();
int   IsZero(NatNo x);
NatNo Succ(NatNo x);
NatNo Pred(NatNo x);
NatNo Add(NatNo x, NatNo y);

// Practise
int   Equal(NatNo x, NatNo y);
int   Greater(NatNo x, NatNo y);
NatNo Sub(NatNo x, NatNo y);		// Error example

// HW
NatNo Mul(NatNo x, NatNo y);
NatNo Div(NatNo x, NatNo y);		// Error case
NatNo Mod(NatNo x, NatNo y);		// Error case

void main()
{
	while (1) {
		int nFtn;
		NatNo x, y, z;
		printf("Is1, Su2, Ad3, Eq4, Gt5, Sb6, Mu7, Di8, Mo9: ? ");
		scanf("%d", &nFtn);
		if (nFtn < 1 || nFtn > 9)
			break;
		printf("x ? ");
		scanf("%d", &x);
		if (nFtn > 2) {
			printf("y ? ");
			scanf("%d", &y);
		}
		switch (nFtn) {
		case 1:
			z = IsZero(x);
			break;
		case 2:
			z = Succ(x);
			break;
		case 3:
			z = Add(x, y);
			break;
		case 4:
			z = Equal(x, y);
			break;
		case 5:
			z = Greater(x, y);
			break;
		case 6:
			z = Sub(x, y);
			break;
		case 7:
			z = Mul(x, y);
			break;
		case 8:
			z = Div(x, y);
			break;
		case 9:
			z = Mod(x, y);
		}
		printf("z = %d\n\n", z);
	}
}

NatNo Error()
{
	printf("Error:: not applicable\n");
	return Zero();
}

NatNo Zero()
{
	return 0;
}

int IsZero(NatNo x)
{
	// [1]:(Z)	IsZero(Zero) ::= true
	// [2]:(N)	IsZero(Succ(x)) ::= false

	if (x == Zero())	// ==�� ��¿ �� ����
		return true;	// [1]
	return false;		// [2]
}

NatNo Succ(NatNo x)
{
	return x + 1;		// +�� ��¿ �� ����
}

NatNo Pred(NatNo x)
{
	if (IsZero(x))
		return Error();
	return x - 1;		// -�� ��¿ �� ����
}

/*** 
	�����ϱ� ���Ͽ� ��������� ��¿ �� ���� 
	�ٸ� �����ڸ� ����Ͽ�����
	���⼭���ʹ� ������ ���ǵ� ������ �̿ܿ�
	�ٸ� �����ڴ� ����� ����� �� ����.
***/

NatNo Add(NatNo x, NatNo y)
{	// x + y
	/*** Method 1 Begin ***/
	// (x+1) + y ::= (x + y) + 1							;; �Ϲ� ����
	//     x  y
	// (1) Z  A --> Add(0, y) ::= y							;; �ߴ� ����
	// (2) N  A --> Add(x + 1, y) ::= Add(x, y) + 1
	// [1]:(Z,A)	Add(Zero(), y) ::= y
	// [2]:(N,A)	Add(Succ(x), y) ::= Succ(Add(x, y))
	if (IsZero(x))
		return y;
	return Succ(Add(Pred(x), y));
	/*** Method 1 End *****/

	/*** Method 2 Begin ***
	// x + (y+1) ::= (x + y) + 1							;; �Ϲ� ����
	//     x  y
	// (1) ?  ? --> ?							;; �ߴ� ����
	// (2) 
	// [1]:(?,?)	Add(?, ?) ::= ?
	// [2]:(?,?)	Add(?, ?) ::= ?

	return Zero();
	/*** Method 2 End *****/
}

int Equal(NatNo x, NatNo y)
{	// x == y
	// (x+1) == (y+1) ::= x == y						;; �Ϲ� ����
	//     x  y
	// (1) Z  Z --> true								;; �ߴ� ����
	// (2) Z  N --> false
	// (3) N  Z --> false
	/*** Method 1 Begin ***/
	// (1)�� (2)�� ��ħ(�� ����� ���� true, false)
	// [1]:(Z,A)	Equal(Zero(), y) ::= IsZero(y)				;; IF IsZero(y) THEN true ELSE false
	// [2]:(N,Z)	Equal(Succ(x), Zero()) ::= false
	// [3]:(N,N)	Equal(Succ(x), Succ(y)) ::= Equal(x, y)

	return Zero();
	/*** Method 1 End *****/

	/*** Method 2 Begin ***
	//     x  y
	// (1) Z  Z --> true								;; �ߴ� ����
	// (2) Z  N --> false
	// (3) N  Z --> false
	// (1)�� (3)�� ��ħ
	// [1]:(?,?)	Equal(?, ?) ::= ?
	// [2]:(?,?)	Equal(?, ?) ::= ?
	// [3]:(?,?)	Equal(?, ?) ::= ?

	return Zero();
	/*** Method 2 End *****/
}

int Greater(NatNo x, NatNo y)
{	// x > y
	// (x+1) > (y+1) ::= x > y							;; �Ϲ� ����
	/*** Method 1 Begin ***/
	//     x  y
	// (1) ?  ? --> ?								;; �ߴ� ����
	// (2) 
	// (3) 
	// (1)�� (2)�� ��ħ
	// [1]:(?,?)	Greater(?, ?) ::= ?
	// [2]:(?,?)	Greater(?, ?) ::= ?
	// [3]:(?,?)	Greater(?, ?) ::= ?

	return Zero();
	/*** Method 1 End *****/

	/*** Method 2 Begin ***
	// (1) ?  ? --> ?								;; �ߴ� ����
	// (2) 
	// (3) 
	// (1)�� (3)�� ��ħ
	// [1]:(?,?)	Greater(?, ?) ::= ?
	// [2]:(?,?)	Greater(?, ?) ::= ?
	// [3]:(?,?)	Greater(?, ?) ::= ?

	return Zero();
	/*** Method 2 End *****/
}

NatNo Sub(NatNo x, NatNo y)
{	// x - y
	// (x+1) - (y+1) ::= x - y							;; �Ϲ� ����
	/*** Method 1 Begin ***/
	// (1) ?  ? --> ?									;; �ߴ� ����
	// (2) 
	// (3) 
	// (1)�� (2)�� ��ħ
	// [1]:(?,?)	Sub(?, ?) ::= ?
	// [2]:(?,?)	Sub(?, ?) ::= ?
	// [3]:(?,?)	Sub(?, ?) ::= ?

	return Zero();
	/*** Method 1 End *****/
	/*** Method 2 Begin ***
	//     x  y
	// (1) ?  ? --> ?									;; �ߴ� ����
	// (2)
	// (3) 
	// (1)�� (3)�� ��ħ
	// [1]:(?,?)	Sub(?, ?) ::= ?
	// [2]:(?,?)	Sub(?, ?) ::= ?
	// [3]:(?,?)	Sub(?, ?) ::= ?

	return Zero();
	/*** Method 2 End *****/
}

NatNo Mul(NatNo x, NatNo y)
{	// x * y
	/*** Method 1 Begin ***/
	// (x+1) * y ::= x * y + y							;; �Ϲ� ����
	//     x  y
	// (1) ?  ? --> ?						;; �ߴ� ����
	// (2) 
	// [1]:(?,?)	Mul(?, ?) ::= ?
	// [2]:(?,?)	Mul(?, ?) ::= ?

	return Zero();
	/*** Method 1 End *****/

	/*** Method 2 Begin ***
	// x * (y+1) ::= x * y + x							;; �Ϲ� ����
	//     x  y
	// (1) ?  ? --> ?						;; �ߴ� ����
	// (2) 
	// [1]:(?,?)	Mul(?, ?) ::= ?
	// [2]:(?,?)	Mul(?, ?) ::= ?

	return Zero();
	/*** Method 2 End *****/
}

NatNo Div(NatNo x, NatNo y)
{	// x / y
	// (x+y) / y ::= x / y + 1							;; �Ϲ� ����
	//     x  y
	// (1) ?  ? --> ?					;; �ߴ� ����
	// (2) 
	// [1]:(?,?)	Div(?, ?) ::= ?
	// [2]:(?,?)	Div(?, ?) ::= ?

	return Zero();
}

NatNo Mod(NatNo x, NatNo y)
{	// x % y
	// (x+y) % y ::= x % y								;; �Ϲ� ����
	//     x  y
	// (1) ?  ? --> ?					;; �ߴ� ����
	// (2) 
	// [1]:(?,?)	Mod(?, ?) ::= ?
	// [2]:(?,?)	Mod(?, ?) ::= ?

	return Zero();
}

/****

[����]
NatNo Add(NatNo x, NatNo y)
{
	// Add(x + 1, y) = Add(x, y) + 1
	//     x  y
	// (1) Z  A --> Add(0, y) ::= y
	// (2) N  A --> Add(x+1, y) ::= Add(x, y) + 1
	// Rule
	// Z�� Zero�̰�, N�� Nonzero�̰�, A�� All �� Zero/Nonzero���� �ǹ��Ѵ�.
	// [1]:(Z,A)	Add(Zero(), y) ::= y						;; 0 + y ::= y
	// [2]:(N,A)	Add(Succ(x), y) ::= Succ(Add(x, y))

	// Coding
	if (IsZero(x))						// y�� �ƹ��� ���������� ����
		return y;						// [1]
	// ���⼭���� x�� Zero�� �ƴ�
	return Succ(Add(Pred(x), y));		// [2]

}

���� ������ ���캸��
(1) �����ڿ� ���� ��Ģ�� �����
(2) ��� ��Ȳ�� ���Ͽ� ������ ��Ģ�� �׻� �����ϴ� ���� �����ϰ�
(3) ��� ��Ȳ������ �����ϰ� �ϳ��� �ִٴ� ���� �����ϰ�
(4) �� ��Ģ�� ���� �ڵ��� �Ǿ���.

���� ������ �߿��� ��� �ִ� ������ �Լ��� ���Ͽ�
���� (1), (2), (3), (4)�� ������ ���� �ڵ��϶�


NatNo Operator(NatNo x, NatNo y)
{
	// 
	// �� �������� ��� ��쿡���� ����ǰ�
	// ���� �ϳ��� ��Ģ�� ����ȴٴ� ���� ���δ�
	//
	
	.......
	.......		// ���� ��Ģ�� ���� ������ �ڵ��� �Ѵ�.
	.......
}

�� ������ �Ǿ� �ִ� ��� �����ڿ� ���Ͽ�
���� ���� ���� ������� ä�� �ִ´�.

****/