# 基础语法

## 开始

```

注释：//
预处理器编译指令：# include ...
开始：
int main(){
    return 0;
}
输出：cout<<
输入：cin>>
结尾语句：;
名称空间：using namespace ...
声明变量：int a
赋值变量：a = 0
类：描述了一种数据类型的全部属性(包括可使用它进行的操作)，对象是根据这些描述创建的实体。
函数：应当为程序中使用的每个函数提供原型。

```

## 数据处理

```

数据类型：整型，浮点型，climits文件
sizeof:具有多少个字节，1字节为8位
整型字面值：开头1~9:十进制，0:8进制，0x:16进制
char字面值：ASCII
通用字符名：\u+8个16进制位 \U+8个16进制位  为ISO 10646码点
wchar_t: char16_t,char32_t, wcout,wcin
const限定常量
算数运算符：+，-，*，/，%
初始化：{}
类型转换：
强制类型转换运算符

```

## 复合类型

```

数组：int a[10] = { ... };
字符串：cin.getline(),string类型， strcpy(),strcat(),strlen(),
结构：struct a{
    int b;
    float c;
    char name[20];
}
共用体：union声明，匿名共用体。
枚举：enum
指针：地址运算符&：获取常规变量地址;解除引用运算符*：得到该地址处存储的值;一定要在对指针应用解除引用运算符之前，将指针初始化为一个确定的、适当的地址。
地址运算符&用于数组名时，返回整个数组的地址。
const修饰指针，增加使用约束。
new运算符：为指针分配未命名的内存
delete运算符：释放指针指向的内存
new 数组[]，应用delete[] 来释放。
箭头成员运算符->：被指向结构的指针使用
自动存储，静态存储，动态存储
模板类vector<>，模板类array<,>

```

## 循环和关系表达式

```

for(;;){

}
++,--
+=,==,*=,/=,%=
<,<=,==,>=,>,!=
while(){

}
do{

}while();
类型别名：typeof char byte;将byte作为char的别名
基于范围的for循环：for(int a : {,,,,})...

```

## 分支语句和逻辑运算符

```

if,if else,&&,||,!
字符函数库：cctype
？：条件运算符
break和continue语句
写入文本文件：outFile.open(path),outFile<<...,outFile.close()
读取文本文件：inFile.open(path),inFile>>...,inFile.close()

```

## 函数

```

函数定义，函数原型，函数调用
函数参数：按值传递，数组参数，结构参数
不想使指针参数指向的数据得到修改使用const修饰形参
递归
函数指针：获取：函数名为函数地址，声明函数指针：包含返回值，参数类型，赋值
函数指针：原型：int a(int b);声明：int (*c)(int);赋值：c = a;
自动类型推断：auto，只能用于单值初始化。
内联函数：提高运行速度，inline修饰，不能递归。
引用变量：引用传递：函数形参使用原始数据,尽量将引用参数声明为const。创建：int & a = b;
引用变量与指针的区别：必须在声明引用时初始化，指针可以先声明后初始化。引用更接近const指针。
右值引用：int && a = 4;
const修饰函数返回值，使函数结果不能被赋值，限制为非左值类型。
默认参数
函数重载
函数模板template<typename T>
decltype关键字：decltype(x+y) a = x+y; 

```

## 内存模型和名称空间

```

单独编译：单独编译文件，将他们连接成可执行文件。
程序分为三部分：头文件：结构声明和使用这些结构函数的原型(函数原型，符号常量，结构声明，类声明，模板声明，内联函数);源代码文件：包含与结构有关的函数代码;源代码文件：包含调用与结构有关的函数代码
储存持续性，作用域，链接性：静态变量：static修饰;extern：声明引用在其他地方定义的变量。
new运算法：初始化:new int[N]，定位new运算符：new(buffer) int[N]
名称空间：namespace{},using 声明

```

## 对象和类

```

类声明，类方法定义：访问控制，作用域解析运算符：：，声明类变量，
构造函数和解析函数：class A,A(),~A()
const声明的类，应确保各种操作不会更改类中的数据，在方法声明后面加上const。
this指针：指向用来调用成员函数的对象
对象数组
类作用域：直接成员运算符.,间接成员运算符->,作用域内枚举enum class A{},
抽象数据类型ADT：类的概念

```

## 使用类

```

运算符重载：operator + (),限制：
友元：原型前加friend，可以访问类的私有成员，为类的非成员函数
类的自动转换和强制类型转换：转换函数：operator double(),
explicit：关闭构造函数的自动转换
类和动态内存分配：在构造函数中使用new必须在析构函数中delete释放
使用一个对象来初始化另一个对象时：复制构造函数
为类默认提供：默认构造函数，默认析构函数，复制构造函数A(const A& a),，赋值运算符，地址运算符，移动构造函数，移动赋值运算符
静态成员函数：
构造函数中使用new应注意：深复制(复制构造函数和赋值运算符重载)
指向对象的指针
继承：基类，派生类，访问权限：派生类不能直接访问基类的私有成员，必须通过基类方法进行访问;构造函数中成员初始化列表，is-a关系，多态公有继承，
虚方法virtual：程序将根据对象类型而不是引用或指针类型来选择方法版本。虚析构函数：确保释放对象时按正确顺序调用析构函数。
如果要在派生类中重新定义基类方法，应设置为虚方法，否则为非虚方法。
静态联编和动态联编
访问控制：protected
抽象基类ABC：在原型中使用=0指出，在类中可以不定义该函数。要求具体派生类覆盖纯虚函数。

```

## 代码重用

```

包含对象成员的类：has-a关系
私有继承：class A ： private B{}， 保护继承
多重继承MI：虚基类class A:virtual B{}:从多个类继承的对象(基类相同)只继承一个基类对象。
类模板：template <class T>;模板的具体化，实例化;将模板用作参数;
成员模板：template <typename T>;
模板别名：using B = A<T,12>;B<int>与A<int,12>等价。

```

## 友元、异常

```

友元类：friend class A;友元成员函数：注意类的创建顺序，
嵌套类
异常：abort():异常终止,try{throw "";}catch(const char *s*){},将对象用作异常类型。
exception类:e.what()
bad_alloc异常：头文件new
RTTI运行阶段类型识别:只适用于包含虚函数的类。dynamic_cast,typeid,type_info
类型转换运算符：dynamic_cast,const_cast,static_cast,reinterpret_cast

```



## 踩过的坑

1. [多文件编写类模板编译错误问题](https://blog.csdn.net/aoyuyuan2115/article/details/102429528)
2. 

