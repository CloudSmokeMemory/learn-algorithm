# C++标准库

## C++11新特性

```

nullptr取代0或NULL
auto完成类型自动推导
一致性初始化{}与初始化列initializer_list
新的for循环形式：for(:){}
Move语义和Rvalue Reference
Raw String Literal:R"a(...)a"; Encoded String literal:u8,u,U,L
noexcept:不让函数抛出异常
constexpr:让表达式核定于编译期间
template：可接受个数不定参数，别名，可拥有默认值。
lambda:[a,&b]{},功能定义式
decltype():让编译器找出表达式的类型
将函数的返回类型声明在参数列之后：auto a() -> int;
带领域的enum
新的基础类型：char16_t,char32_t,long long, unsigned long long,std::nullptr_t

```

## 通用工具

```

Pair:将两个value视为一个单元。make_pair()
Tuple:不定数的值组make_tuple,get<>()，ref(),tie()
Smart Pointer智能指针：shared_prt共享式，当指针的最末一个拥有者被销毁时，相应对象就会被deleted;unique_prt独占式，确保一个对象和其他相应的资源同一时间只被一个指针拥有。
数值的极值numeric_limits<>
type_traits:提供处理type属性的方法，处理共通类型，类型判断，检验类型关系，类型修饰。
Reference Wrapper外覆器：ref(x)。Function Type Wrapper外覆器：function<void(int,int)>
辅助函数：最大值最小值，两值互换swap(),增补的比较运算符，
ratio编译期分数运算:大幅降低运行期溢出几率。
chrono，ctime 处理日期和时间：时间段Duration,时钟Clock，时间点Timepoint。以计时器停滞线程
cstddef,cstdlib,cstring常用头文件

```

## 标准模板库

```

STL组件：容器：管理某类对象的集合、迭代器：在一个对象集合内遍历元素、算法：处理集合内的元素。
STL基本观念：数据和操作分离。根本特性：所有组件都可以针对任意类型运作。
容器：序列式：array,vector,deque,list,forward_list。关联式：set、mutiset、map、mutimap。无序：unordered_set、unordered_mutiset、unordered_map、unordered_mutimap。基本成员函数：begin(),end(),cbegin(),cend(),
关联式数组
容器适配器：根据基本容器实现的。Stack、Queue、Priority queue。
迭代器基本操作：operator +、operator ++、operator ==\！=、operator =。每一种容器都必须提供自己的迭代器。
迭代器的种类：向前，双向，随机访问，输入型，输出型。
算法：不是容器类的成员函数，搭配迭代器使用的全局函数。保证区间有效，左闭右开。
迭代器适配器：安插型(back,front,general)，串流(读写stream)，逆向(造成算法逆向操作)，搬移。
操作型算法：任何以迭代器访问容器的算法，都无法通过迭代器调用容器类所提供的任何成员函数。关联式和无序容器不能当做操作目标。
以函数作为算法的实参：for_each(),transform(),判断式(返回bool类型)，lambda
函数对象：带状态的函数，每个函数对象有其自己的类型，比寻常函数快。预定义的函数对象functional
bind：将预定义的对象和其他数值结合为一体。

```

## STL容器

```

容器的共通：STL容器的核心能力(所有容器提供的都是value语义不是reference语义;元素在容器内有特定的顺序;各项操作并非绝对安全，调用者需要确保传给操作函数的实参符合条件。)。共同操作。共通类型(size_type,difference_type,value_type,reference,const_reference,iterator,const_iterator,pointer,const pointer)
Array:比寻常array安全，效率并没有变差。不支持分配器。tuple接口。
Vector:
Deque:
List:
Forward_list:
Set和Mutiset:
Map和Mutimap:
无序容器：
各种容器的使用时机:
```
