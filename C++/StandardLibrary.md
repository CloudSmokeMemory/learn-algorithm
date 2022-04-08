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



```
