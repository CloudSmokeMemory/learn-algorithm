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
