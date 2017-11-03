# DesignPatterns

![SummaryOfDesignPatterns](D:\CodeForC++\DailyLearning\DesignPatterns\DesignPatterns\pic\SummaryOfDesignPatterns.jpg)



| 范围      | 创建型                                      | 结构型                              | 行为型                                      |
| ------- | ---------------------------------------- | -------------------------------- | ---------------------------------------- |
| 对象创建    | Factory Method（工厂方法）Abstract Factory（抽象工厂）Singleton（单例）Prototype（原型）Builder（建造者） |                                  |                                          |
| 接口适配    |                                          | Adapter（适配器）Bridge（桥接）Façade（外观） |                                          |
| 对象去耦    |                                          |                                  | Mediator（中介者）Observer（观察者）               |
| 抽象集合    |                                          | Composite（组合）                    | Iterator（迭代器）                            |
| 行为扩展    |                                          | Decorator（装饰）                    | Visitor（访问者）Chain of Responsibility（职责链） |
| 算法封装    |                                          |                                  | Template Method（模板方法）Strategy（策略）Command |
| 性能与对象访问 |                                          | Flyweight（享元）Proxy（代理）           |                                          |
| 对象状态    |                                          |                                  | Memento（备忘录）State（状态）                    |
| 其它      |                                          |                                  | Interpreter（解释器）                         |

## 工厂方法模式(Factory Methord)

**定义**

工厂方法模式又称为工厂模式，也叫虚拟构造器（Virtual Constructor）模式或者多态工厂模式（Polymorphic Factory），在工厂方法模式中，父类负责定义创建对象的公共接口，而子类则负责生成具体的对象，这样做的目的是将类的实例化操作延迟到子类中完成，即由子类来决定究竟应该实例化（创建）哪一个类。

工厂方式法模式（Factory Method），定义了一个用于创建对象的接口，让子类决定实例化哪一个类。工厂方法使一个类的实例化延迟到子类。

**意图**

定义一个用户创建对象的接口，让子类决定实例化哪一个类，工厂方法模式使一个类的实例化延迟到其子类。

**参与者**

抽象产品角色（IProduct）：定义产品的接口
具体产品角色（ConcreteProduct） ：实现接口Product的具体产品类
抽象工厂角色（Factory） ：声明工厂方法（CreateProduct），返回产品的接口
真实的工厂（ConcreteFactory）：实现CreateProduct工厂方法，由客户调用，返回一个产品的实例

**类图**

![FactoryMethodPattern](D:\CodeForC++\DailyLearning\DesignPatterns\DesignPatterns\pic\FactoryMethodPattern.PNG)

**工厂方法模式的优点**
在工厂方法模式中，工厂方法用来创建客户所需要的产品，同时还向客户隐藏了哪种具体产品类将被实例化这一细节，用户只需要关心所需产品对应的工厂，无须关心创建细节，甚至无须知道具体产品类的类名。

基于工厂角色和产品角色的多态性设计是工厂方法模式的关键。它能够使工厂可以自主确定创建何种产品对象，而如何创建这个对象的细节则完全封装在具体工厂内部。工厂方法模式之所以又被称为多态工厂模式，是因为所有的具体工厂类都具有同一抽象父类。

使用工厂方法模式的另一个优点是在系统中加入新产品时，无须修改抽象工厂和抽象产品提供的接口，无须修改客户端，也无须修改其他的具体工厂和具体产品，而只要添加一个具体工厂和具体产品就可以了。这样，系统的可扩展性也就变得非常好，完全符合“开闭原则”。

**工厂方法模式的缺点**
在添加新产品时，需要编写新的具体产品类，而且还要提供与之对应的具体工厂类，系统中类的个数将成对增加，在一定程度上增加了系统的复杂度，有更多的类需要编译和运行，会给系统带来一些额外的开销。

由于考虑到系统的可扩展性，需要引入抽象层，在客户端代码中均使用抽象层进行定义，增加了系统的抽象性和理解难度，且在实现时可能需要用到DOM、反射等技术，增加了系统的实现难度。

**模式适用环境**
在以下情况下可以使用工厂方法模式：

一个类不知道它所需要的对象的类：在工厂方法模式中，客户端不需要知道具体产品类的类名，只需要知道所对应的工厂即可，具体的产品对象由具体工厂类创建；客户端需要知道创建具体产品的工厂类。

一个类通过其子类来指定创建哪个对象：在工厂方法模式中，对于抽象工厂类只需要提供一个创建产品的接口，而由其子类来确定具体要创建的对象，利用面向对象的多态性和里氏代换原则，在程序运行时，子类对象将覆盖父类对象，从而使得系统更容易扩展。

将创建对象的任务委托给多个工厂子类中的某一个，客户端在使用时可以无须关心是哪一个工厂子类创建产品子类，需要时再动态指定，可将具体工厂类的类名存储在配置文件或数据库中。

**小结**
工厂方法模式又称为工厂模式，它属于类创建型模式。在工厂方法模式中，工厂父类负责定义创建产品对象的公共接口，而工厂子类则负责生成具体的产品对象，这样做的目的是将产品类的实例化操作延迟到工厂子类中完成，即通过工厂子类来确定究竟应该实例化哪一个具体产品类。
工厂方法模式包含四个角色：抽象产品是定义产品的接口，是工厂方法模式所创建对象的超类型，即产品对象的共同父类或接口；具体产品实现了抽象产品接口，某种类型的具体产品由专门的具体工厂创建，它们之间往往一一对应；抽象工厂中声明了工厂方法，用于返回一个产品，它是工厂方法模式的核心，任何在模式中创建对象的工厂类都必须实现该接口；具体工厂是抽象工厂类的子类，实现了抽象工厂中定义的工厂方法，并可由客户调用，返回一个具体产品类的实例。 
工厂方法模式是简单工厂模式的进一步抽象和推广。由于使用了面向对象的多态性，工厂方法模式保持了简单工厂模式的优点，而且克服了它的缺点。在工厂方法模式中，核心的工厂类不再负责所有产品的创建，而是将具体创建工作交给子类去做。这个核心类仅仅负责给出具体工厂必须实现的接口，而不负责产品类被实例化这种细节，这使得工厂方法模式可以允许系统在不修改工厂角色的情况下引进新产品。 
工厂方法模式的主要优点是增加新的产品类时无须修改现有系统，并封装了产品对象的创建细节，系统具有良好的灵活性和可扩展性；其缺点在于增加新产品的同时需要增加新的工厂，导致系统类的个数成对增加，在一定程度上增加了系统的复杂性。 
工厂方法模式适用情况包括：一个类不知道它所需要的对象的类；一个类通过其子类来指定创建哪个对象；将创建对象的任务委托给多个工厂子类中的某一个，客户端在使用时可以无须关心是哪一个工厂子类创建产品子类，需要时再动态指定。

## 抽象工厂模式(Abstract Factory)

**定义**

为创建一组相关或相互依赖的对象提供一个接口，而且无需指定他们的具体类。

**动机**

在工厂方法模式中具体工厂负责生产具体的产品，每一个具体工厂对应一种具体产品，工厂方法也具有唯一性，一般情况下，一个具体工厂中只有一个工厂方法或者一组重载的工厂方法。但是有时候我们需要一个工厂可以提供多个产品对象，而不是单一的产品对象。

为了更清晰地理解工厂方法模式，需要先引入两个概念：
**产品等级结构**：产品等级结构即产品的继承结构，如一个抽象类是显示器，其子类LG显示器、三星显示器等，则抽象显示器与具体品牌的显示器之间构成了一个产品等级结构，抽象显示器是父类，而具体品牌的显示器是其子类。
**产品族**：在抽象工厂模式中，产品族是指由同一个工厂生产的，位于不同产品等级结构中的一组产品，如LG工厂生产的LG显示器、LG主机，LG显示器位于显示器产品等级结构中，LG主机位于主机等级结构中。LG的显示器加主机就构成了一台纯LG电脑。当然，按照工厂不同，也可以进行混搭。
产品族与产品等级结构示意图

**参与者**

抽象产品角色（IProduct）：定义产品的接口
具体产品角色（ConcreteProduct） ：实现接口Product的具体产品类
抽象工厂角色（Factory） ：声明工厂方法（CreateProduct），返回一族产品的接口
真实的工厂（ConcreteFactory）：实现CreateProduct工厂方法，由客户调用，返回一族产品的实例

**类图**

![AbstractFactoryPattern](D:\CodeForC++\DailyLearning\DesignPatterns\DesignPatterns\pic\AbstractFactoryPattern.PNG)

**抽象工厂模式的优点**
抽象工厂模式隔离了具体类的生成，使得客户并不需要知道什么被创建。由于这种隔离，更换一个具体工厂就变得相对容易。所有的具体工厂都实现了抽象工厂中定义的那些公共接口，因此只需改变具体工厂的实例，就可以在某种程度上改变整个软件系统的行为。另外，应用抽象工厂模式可以实现高内聚低耦合的设计目的，因此抽象工厂模式得到了广泛的应用。
当一个产品族中的多个对象被设计成一起工作时，它能够保证客户端始终只使用同一个产品族中的对象。这对一些需要根据当前环境来决定其行为的软件系统来说，是一种非常实用的设计模式。
增加新的具体工厂和产品族很方便，无须修改已有系统，符合“开闭原则”。

**抽象工厂模式的缺点**
在添加新的产品对象时，难以扩展抽象工厂来生产新种类的产品，这是因为在抽象工厂角色中规定了所有可能被创建的产品集合，要支持新种类的产品就意味着要对该接口进行扩展，而这将涉及到对抽象工厂角色及其所有子类的修改，显然会带来较大的不便。
开闭原则的倾斜性（增加新的工厂和产品族容易，增加新的产品等级结构麻烦）

**模式适用环境**
**在以下情况下可以使用抽象工厂模式：**
一个系统不应当依赖于产品类实例如何被创建、组合和表达的细节，这对于所有类型的工厂模式都是重要的。 
系统中有多于一个的产品族，而每次只使用其中某一产品族。
属于同一个产品族的产品将在一起使用，这一约束必须在系统的设计中体现出来。
系统提供一个产品类的库，所有的产品以同样的接口出现，从而使客户端不依赖于具体实现。

**小结**

无论是简单工厂模式，工厂方法模式，还是抽象工厂模式，他们都属于工厂模式，在形式和特点上也是极为相似的，他们的最终目的都是为了解耦。在使用时，我们不必去在意这个模式到底工厂方法模式还是抽象工厂模式，因为他们之间的演变常常是令人琢磨不透的。经常你会发现，明明使用的工厂方法模式，当新需求来临，稍加修改，加入了一个新方法后，由于类中的产品构成了不同等级结构中的产品族，它就变成抽象工厂模式了；而对于抽象工厂模式，当减少一个方法使的提供的产品不再构成产品族之后，它就演变成了工厂方法模式。

 所以，在使用工厂模式时，只需要关心降低耦合度的目的是否达到了。

## 单例模式

**定义**

数学与逻辑学中，singleton定义为“有且仅有一个元素的集合”。

单例模式最初的定义出现于《设计模式》（艾迪生维斯理, 1994）：“保证一个类仅有一个实例，并提供一个访问它的全局访问点。”

Java中单例模式定义：“一个类有且仅有一个实例，并且自行实例化向整个系统提供。”

**动机**

对于系统中的某些类来说，只有一个实例很重要，例如，一个系统中可以存在多个打印任务，但是只能有一个正在工作的任务；一个系统只能有一个窗口管理器或文件系统；一个系统只能有一个计时工具或ID(序号)生成器。如在Windows中就只能打开一个任务管理器。如果不使用机制对窗口对象进行唯一化，将弹出多个窗口，如果这些窗口显示的内容完全一致，则是重复对象，浪费内存资源；如果这些窗口显示的内容不一致，则意味着在某一瞬间系统有多个状态，与实际不符，也会给用户带来误解，不知道哪一个才是真实的状态。因此有时确保系统中某个对象的唯一性即一个类只能有一个实例非常重要。[3][ ]() 

如何保证一个类只有一个实例并且这个实例易于被访问呢？定义一个全局变量可以确保对象随时都可以被访问，但不能防止我们实例化多个对象。一个更好的解决办法是让类自身负责保存它的唯一实例。这个类可以保证没有其他实例被创建，并且它可以提供一个访问该实例的方法。这就是单例模式的模式动机。

**实现方式**

懒汉与饿汉

单例大约有两种实现方法：懒汉与饿汉。
懒汉：故名思义，不到万不得已就不会去实例化类，也就是说在第一次用到类实例的时候才会去实例化，所以上边的经典方法被归为懒汉实现；
饿汉：饿了肯定要饥不择食。所以在单例类定义的时候就进行实例化。
特点与选择：
由于要进行线程同步，所以在访问量比较大，或者可能访问的线程比较多时，采用饿汉实现，可以实现更好的性能。这是以空间换时间。
在访问量较小时，采用懒汉实现。这是以时间换空间。

> 懒汉由于是在使用的时候才进行实例化，这就需要考虑并发时的线程安全。而饿汉则不用

对比：

代码中有三种实现方式

经典懒汉：使用时创建实例，可以进行实例销毁

静态成员懒汉：使用时创建实例，不能进行实例销毁

饿汉：类定义是创建实例，可以进行实例销毁

**优点**

一、实例控制
单例模式会阻止其他对象实例化其自己的单例对象的副本，从而确保所有对象都访问唯一实例。
二、灵活性
因为类控制了实例化过程，所以类可以灵活更改实例化过程。

**缺点**

一、开销
虽然数量很少，但如果每次对象请求引用时都要检查是否存在类的实例，将仍然需要一些开销。可以通过使用静态初始化解决此问题。
二、可能的开发混淆
使用单例对象（尤其在类库中定义的对象）时，开发人员必须记住自己不能使用new关键字实例化对象。因为可能无法访问库源代码，因此应用程序开发人员可能会意外发现自己无法直接实例化此类。
三、对象生存期
不能解决删除单个对象的问题。在提供内存管理的语言中（例如基于.NET Framework的语言），只有单例类能够导致实例被取消分配，因为它包含对该实例的私有引用。在某些语言中（如 C++），其他类可以删除对象实例，但这样会导致单例类中出现悬浮引用。

**模式扩展**

在实际项目中，一个模式不会像我们这里的代码那样简单，只有在熟练了各种设计模式的特点，才能更好的在实际项目中进行运用。单例模式和工厂模式在实际项目中经常见到，两种模式的组合，在项目中也是很常见的。所以，有必要总结一下两种模式的结合使用。

一种产品，在一个工厂中进行生产，这是一个工厂模式的描述；而只需要一个工厂，就可以生产一种产品，这是一个单例模式的描述。所以，在实际中，一种产品，我们只需要一个工厂，此时，就需要工厂模式和单例模式的结合设计。由于单例模式提供对外一个全局的访问点，所以，我们就需要使用[简单工厂模式](http://www.jellythink.com/archives/42)中那样的方法，定义一个标识，用来标识要创建的是哪一个单件。由于模拟代码较多，[原作者](http://www.jellythink.com/archives/82)提供了[工程下载链接](http://pan.baidu.com/s/1kTnNXo7)。

## 建造者模式

**定义**

在GOF的《设计模式 可复用面向对象软件的基础》中是这样说的：将一个复杂对象的构建与它的表示分离，使得同样的构建过程可以创建不同的表示。

**动机**

一个复杂对象的创建，其通常是由很多的子对象构成；如果一个对象能够直接就创建好了，那么也不会称之为复杂对象。由于项目中需求的变化，这个复杂对象的各个部分经常会发生剧烈的变化，但是，不管怎么变化，将它们组合在一起，组成一个复杂的对象的事实是不会变的。建造者模式就提供了一种“封装机制”来将各个对象的变化隔离开，最终，组合成复杂对象的过程是不会变的。

**参与者**

Product产品类，通过模板方法模式实现，有基本方法和模板方法
Builder抽象建造者，规范产品的组件，一般由子类实现
ConcreteBuilder具体建造者，实现抽象类定义的所有方法，并返回一个创建好的对象
Director导演类，负责安排已有模块的顺序，然后告诉建造者开始建造

**类图**

![BuilderPattern](D:\CodeForC++\DailyLearning\DesignPatterns\DesignPatterns\pic\BuilderPattern.PNG)

**优点**

封装性
建造者独立，容易扩展--》就是这个所谓不同的顺序的具体描述了
便于控制细节风险，细节问题封装在建造者中，所以互不影响
**使用场景**

相同方法，不同顺序
多个部件可以组装，但是产生的结果不同时
产品类非常复杂或者调用顺序不同，产生的功能不同
对象创建过程中会使用到的系统中的其他对象时，这些对象在产品对象的创建过程不易得到时，可以采用建造者模式疯长该对象的创建过程。这是一个补偿方法。

**小结**

一个复杂对象是由多个部件组成的，建造者模式是把复杂对象中各部件的创建和组装分开，分别用Builder类和Director类来表示。用Director构建最后的复杂对象，而在上面Builder接口中封装的是如何创建一个个部件（复杂对象是由这些部件组成的），也就是说，Director负责如何将部件最后组装成产品。这样建造者模式就让设计和实现解耦了。

刚开始接触建造者模式的时候，最容易把建造者和抽象工厂模式混淆了。由于而这都属于创建型的设计模式，所以二者之间是有公共点的，但是建造者模式注重于对象组合，即不同的小对象组成一个整体的复杂大对象，而抽象工厂模式针对于接口编程，只是对外提供创建对象的工厂接口，不负责对象之后的处理。

## 原型模式

摘自：[C++设计模式——原型模式](http://www.jellythink.com/archives/105)

**什么是原型模式？**

在GOF的《设计模式：可复用面向对象软件的基础》中是这样说的：用原型实例指定创建对象的种类，并且通过拷贝这些原型创建新的对象。在这个定义中，最重要的一个词是“拷贝”，也就是口头上的复制，而这个拷贝，也就是原型模式的精髓所在。

举一个最简单的例子来说明原型模式：记得上小学的时候，老师把需要做的课外习题写到黑板上，而下面的我们都要把这些题抄写到自己的本子上，回家做好，第二天交上来，也就是每道题，全班50个人，每个人都要抄写一遍。按照现在的时间理论来说，就是浪费了50个人的时间。但是，那个时候条件限制，老师也是不得已而为之。现在好了，老师做一份电子版的习题，打印一份，然后拿着这份打印的原版，就可以复制出50份。

结合原型模式的概念进行分析，老师打印出来的那一份，就是“原型”，而复制出来的那50份，就是使用的“拷贝”。而原型模式就是这么简单的一个道理，通过现有的东西，再复制出一个来。

**为什么要使用原型模式？**

原型模式和建造者模式、工厂方法模式一样，都属于创建型模式的一种。简单的来说，我们使用原型模式，就是为了创建对象。但是，在以下场景下，使用原型模式是最好的选择：

1. 当我们的对象类型不是开始就能确定的，而这个类型是在运行期确定的话，那么我们通过这个类型的对象克隆出一个新的对象比较容易一些；
2. 有的时候，我们需要一个对象在某个状态下的副本，此时，我们使用原型模式是最好的选择；例如：一个对象，经过一段处理之后，其内部的状态发生了变化；这个时候，我们需要一个这个状态的副本，如果直接new一个新的对象的话，但是它的状态是不对的，此时，可以使用原型模式，将原来的对象拷贝一个出来，这个对象就和之前的对象是完全一致的了；
3. 当我们处理一些比较简单的对象时，并且对象之间的区别很小，可能就几个属性不同而已，那么就可以使用原型模式来完成，省去了创建对象时的麻烦了；
4. 有的时候，创建对象时，构造函数的参数很多，而自己又不完全的知道每个参数的意义，就可以使用原型模式来创建一个新的对象，不必去理会创建的过程，让创建过程见鬼去吧。

所以，在上述的的情况下，在设计的时候，适当的考虑一下原型模式，减少对应的工作量，减少程序的复杂度，提高效率。

**类图**

![PrototypePattern](D:\CodeForC++\DailyLearning\DesignPatterns\DesignPatterns\pic\PrototypePattern.PNG)

由于克隆需要一个原型，而上面的类图中Prototype就这个原型，Prototype定义了克隆自身的Clone接口，由派生类进行实现，而实现原型模式的重点就在于这个Clone接口的实现。ConcretePrototype1类和ConcretePrototype2类继承自Prototype类，并实现Clone接口，实现克隆自身的操作；同时，在ConcretePrototype1类和ConcretePrototype2类中需要重写默认的复制构造函数，供Clone函数调用，Clone就是通过在内部调用重写的复制构造函数实现的。在后续的编码过程中，如果某个类需要实现Clone功能，就只需要继承Prototype类，然后重写自己的默认复制构造函数就好了。好比在C#中就提供了ICloneable接口，当某个类需要实现原型模式时，只需要实现这个接口的道理是一样的。

**实用性**

​               1.当要实例化的类是在运行时刻指定时。

　　　　2.为了避免创建一个与产品类层次平行的工厂类层次时。

　　　　3.当一个类的实例只能有几个不同状态组合中的一种时。

**效果**  

​               1.可以在运行时刻增加产品。

　　　　2.改变值以指定新对象。

　　　　3.改变结构以指定新对象。

　　　　4.减少子类的构造。

　　　　5.用类动态配置应用。

**与其它创建型模式的比较**

工厂方法模式、抽象工厂模式、建造者模式和原型模式都是创建型模式。工厂方法模式适用于生产较复杂，一个工厂生产单一的一种产品的时候；抽象工厂模式适用于一个工厂生产多个相互依赖的产品；建造者模式着重于复杂对象的一步一步创建，组装产品的过程，并在创建的过程中，可以控制每一个简单对象的创建；原型模式则更强调的是从自身复制自己，创建要给和自己一模一样的对象。

**小结**

原型模式作为创建型模式中最特殊的一个模式，具体的创建过程，是由对象本身提供，这样我们在很多的场景下可以很方便的快速的构建新的对象。但是，原型模式的最大缺点是继承原型的子类都要实现Clone操作，这个是很困难的。例如，当所考虑的类已经存在时就难以新增Clone操作。当内部包括一些不支持拷贝或者有循环引用的对象时，实现克隆可能也会很困难。说以说，每一种设计模式都有它的优点和缺点，在设计的时候，我们需要进行权衡各方面的因素，扬长避短。

## 观察者模式

**定义**

观察者模式（又被称为发布-订阅（Publish/Subscribe）模式，属于行为型模式的一种，它定义了一种一对多的依赖关系，让多个观察者对象同时监听某一个主题对象。这个主题对象在状态变化时，会通知所有的观察者对象，使他们能够自动更新自己。

**动机**

观察者模式可以实现消息的广播，一个消息可以同步触发多个事件，这是观察者模式非常重要的功能。它可以说是应用最多、影响最广的模式之一，因为 Observer 的一个实例 Model/View/Control（ MVC） 结构，在系统开发架构设计中有着很重要的地位和意义， MVC实现了 **业务逻辑和表示层的解耦** 。在 MFC 中， Doc/View（文档视图结构）提供了实现 MVC 的框架结构。在 Java 阵容中， Struts 则提供和 MFC 中 Doc/View 结构类似的实现 MVC 的框架。另外 Java 语言本身就提供了 Observer 模式的实现接口。当然， MVC 只是 Observer 模式的一个实例。

**参与者**

ISubject（目标接口）
——目标知道它的观察者。可以有任意多个观察者观察同一个目标；
——提供注册和删除观察者对象的接口。

IObserver（观察者接口）
——为那些在目标发生改变时需获得通知的对象定义一个更新接口。

Subject（具体目标）
——将有关状态存入各Observer对象；
——当它的状态发生改变时，向它的各个观察者发出通知。

 ConcreteObserver（具体观察者）
——维护一个指向ConcreteSubject对象的引用；
——存储有关状态，这些状态应与目标的状态保持一致；
——实现Observer的更新接口以使自身状态与目标的状态保持一致。

**类图**

![ObserverPattern](D:\CodeForC++\DailyLearning\DesignPatterns\DesignPatterns\pic\ObserverPattern.PNG)

Subject中会存储所有正在观察它的观察者，并提供附着和去附着观察者的操作。当有状态更新时，会调用notify方法。该方法会遍历附着在目标上的观察者，并调用观察者的update方法用以更新目标在观察者中的状态。

**优点**

第一、观察者模式在被观察者和观察者之间建立一个抽象的耦合。被观察者角色所知道的只是一个具体观察者列表，每一个具体观察者都符合一个抽象观察者的接口。被观察者并不认识任何一个具体观察者，它只知道它们都有一个共同的接口。
由于被观察者和观察者没有紧密地耦合在一起，因此它们可以属于不同的抽象化层次。如果被观察者和观察者都被扔到一起，那么这个对象必然跨越抽象化和具体化层次。
第二、观察者模式支持广播通讯。被观察者会向所有的登记过的观察者发出通知，
**缺点**

第一、如果一个被观察者对象有很多的直接和间接的观察者的话，将所有的观察者都通知到会花费很多时间。
第二、如果在被观察者之间有循环依赖的话，被观察者会触发它们之间进行循环调用，导致系统崩溃。在使用观察者模式是要特别注意这一点。
第三、如果对观察者的通知是通过另外的线程进行异步投递的话，系统必须保证投递是以自恰的方式进行的。
第四、虽然观察者模式可以随时使观察者知道所观察的对象发生了变化，但是观察者模式没有相应的机制使观察者知道所观察的对象是怎么发生变化的。 

**使用场景**

1. 当一个抽象模型有两个方面，其中一个方面依赖于另一方面。将这二者封装在独立的对象中以使它们可以各自独立的改变和复用；
2. 当对一个对象的改变需要同时改变其它对象，而不知道具体有多少对象有待改变；
3. 当一个对象必须通知其它对象，而它又不能假定其它对象是谁；也就是说，你不希望这些对象是紧密耦合的。

## 访问者模式

**定义**

封装某些作用于某种数据结构中各元素的操作，它可以在不改变数据结构的前提下定义作用于这些元素的新的操作。

**动机**

将数据结构与数据操作分离。

**参与者**

IVisitor : 抽象访问者。声明可以访问哪些元素，具体到程序中就是Visit方法参数定义哪些对象可以被访问
Visitor : 具体访问者。他确定了访问到元素后的具体操作。
IElement : 抽象元素。声明哪一个类访问者访问，程序上通过accept方法中的参数定义
Element : 具体元素。实现accept方法，visitor.visit(this)基本形成一种模式
ObjectStrture : 结构对象。元素的一种集合，一般容纳多个元素，不同接口的容器，如list，set，map，在项目中一般很少抽象这个角色

![Visitor](D:\CodeForC++\DailyLearning\DesignPatterns\DesignPatterns\pic\Visitor.PNG)

ObjectStrture 中的accept方法会遍历成员变量中每一个Element，并将具体的Visitor作为入参，调用Element的accept方法。而这个accept方法又会调用Visiter的visitor方法，对该元素进行具体的操作。

**优点**

1，访问者模式使得增加新的操作变得很容易。如果一些操作依赖于一个复杂的结构对象的话，那么一般而言，增加新的操作会很复杂。而使用访问者模式，增加新的操作就意味着增加一个新的访问者类，因此，变得很容易。
2，访问者模式将有关的行为集中到一个访问者对象中，而不是分散到一个个的节点类中。
3，访问者模式可以跨过几个类的等级结构访问属于不同的等级结构的成员类。迭代子只能访问属于同一个类型等级结构的成员对象，而不能访问属于不同等级结构的对象。访问者模式可以做到这一点。
4，积累状态。每一个单独的访问者对象都集中了相关的行为，从而也就可以在访问的过程中将执行操作的状态积累在自己内部，而不是分散到很多的节点对象中。这是有益于系统维护的优点。
**缺点**

1，增加新的节点类变得很困难。每增加一个新的节点都意味着要在抽象访问者角色中增加一个新的抽象操作，并在每一个具体访问者类中增加相应的具体操作。
2，破坏封装。访问者模式要求访问者对象访问并调用每一个节点对象的操作，这隐含了一个对所有节点对象的要求：它们必须暴露一些自己的操作和内部状态。不然，访问者的访问就变得没有意义。由于访问者对象自己会积累访问操作所需的状态，从而使这些状态不再存储在节点对象中，这也是破坏封装的。

**使用场景**

假如一个对象中存在着一些与本对象不相干（或者关系较弱）的操作，为了避免这些操作污染这个对象，则可以使用访问者模式来把这些操作封装到访问者中去。
假如一组对象中，存在着相似的操作，为了避免出现大量重复的代码，也可以将这些重复的操作封装到访问者中去。

**小结**

正如《设计模式》的作者GoF对访问者模式的描述：大多数情况下，你并需要使用访问者模式，但是当你一旦需要使用它时，那你就是真的需要它了。当然这只是针对真正的大牛而言。在现实情况下（至少是我所处的环境当中），很多人往往沉迷于设计模式，他们使用一种设计模式时，从来不去认真考虑所使用的模式是否适合这种场景，而往往只是想展示一下自己对面向对象设计的驾驭能力。编程时有这种心理，往往会发生滥用设计模式的情况。所以，在学习设计模式时，一定要理解模式的适用性。必须做到使用一种模式是因为了解它的优点，不使用一种模式是因为了解它的弊端；而不是使用一种模式是因为不了解它的弊端，不使用一种模式是因为不了解它的优点。

## 中介者模式

**定义**

用一个中介者对象封装一系列的对象交互，中介者使各对象不需要显示地相互作用，从而使耦合松散，而且可以独立地改变它们之间的交互。

**动机**

先了解同事类的概念：如果一个对象会影响其他的对象，同时也会被其他对象影响，那么这两个对象称为同事类。

 一般来说，同事类之间的关系是比较复杂的，多个同事类之间互相关联时，他们之间的关系会呈现为复杂的网状结构，这是一种过度耦合的架构，即不利于类的复用，也不稳定。例如在下图中，有六个同事类对象，假如对象1发生变化，那么将会有4个对象受到影响。如果对象3发生变化，那么将会有3个对象受到影响。也就是说，同事类之间直接关联的设计是不好的。

![net-like](D:\CodeForC++\DailyLearning\DesignPatterns\DesignPatterns\pic\MediatorPattern\net-like.jpg)

如果引入中介者模式，那么同事类之间的关系将变为星型结构，从图中可以看到，任何一个类的变动，只会影响的类本身，以及中介者，这样就减小了系统的耦合。一个好的设计，必定不会把所有的对象关系处理逻辑封装在本类中，而是使用一个专门的类来管理那些不属于自己的行为。

![star-like](D:\CodeForC++\DailyLearning\DesignPatterns\DesignPatterns\pic\MediatorPattern\star-like.jpg)

```cpp
#include <iostream>
using namespace std;

class AbstractColleague {
public:
	virtual int getNumber() {
		return number;
	}
	virtual void setNumber(int number) {
		this->number = number;
	}

	//抽象方法，修改数字时同时修改关联对象  
	virtual void changeNumber(int number, AbstractColleague* coll) {};
protected:
	int number;
};  
  
class ColleagueA : public AbstractColleague {
public:
	void changeNumber(int number, AbstractColleague* coll) {
		this->number = number;
		coll->setNumber(number * 100);
	}
};
  
class ColleagueB : public AbstractColleague {
public:
	void changeNumber(int number, AbstractColleague* coll) {
		this->number = number;
		coll->setNumber(number / 100);
	}
};
  
void main() {  
		AbstractColleague *collA = new ColleagueA();
		AbstractColleague *collB = new ColleagueB();

		cout << "==========设置A影响B==========" << endl;
		collA->changeNumber(1288, collB);
		cout << "collA的number值：" << collA->getNumber() << endl;
		cout << "collB的number值：" << collB->getNumber() << endl;

		cout << "==========设置B影响A==========" << endl;
		collB->changeNumber(87635, collA);
		cout << "collB的number值：" << collB->getNumber() << endl;
		cout << "collA的number值：" << collA->getNumber() << endl;
}  
```

上面的代码中，类A类B通过直接的关联发生关系，假如我们要使用中介者模式，类A类B之间则不可以直接关联，他们之间必须要通过一个中介者来达到关联的目的。

```cpp
#include <iostream>
using namespace std;

class AbstractColleague {
public:
	int getNumber() {
		return number;
	}
	void setNumber(int number) {
		this->number = number;
	}

	void changeNumber(int number, Mediator* med) {
		this->number = number;
		med->affect(number, this);  //通过调用中介者的affect方法来对其他的同事产生影响
	}
protected:
	int number;
};

//同事A
class ColleagueA : public AbstractColleague {};

//同事B
class ColleagueB : public AbstractColleague {};

class Mediator {
public:
	Mediator(ColleagueA* collA, ColleagueB* collB) : collA(collA), collB(collB) {}
	void affect(int number, AbstractColleague* coll) {//中介者通过入参类型来判断具体的影响
		if (coll == collA) {
			collB->setNumber(number * 100);
		}
		if (coll == collB) {
			collA->setNumber(number / 100);
		}
	};
private:
	ColleagueA* collA;
	ColleagueB* collB;
};
```

**类图**

![Mediator](D:\CodeForC++\DailyLearning\DesignPatterns\DesignPatterns\pic\MediatorPattern\Mediator.PNG)

同事类在做某些改变时会调用中介者的affect方法，通过该方法来影响其他的同事类。而中介者则要判断是哪一个类发生了变化，从而对波及类进行操作。

**参与者**

Mediator：中介者接口。在里面定义了各个同事之间相互交互所需要的方法，可以是公共的方法，如Change方法，也可以是小范围的交互方法。**接口是用来隔离的，如果只有一个中介者对象，预期中也没打算扩展，那就没有必要定义Mediator接口。**

ConcreteMediator：具体的中介者实现对象。它需要了解并为维护每个同事对象，并负责具体的协调各个同事对象的交互关系。

Colleague：同事类的定义，通常实现成为抽象类，主要负责约束同事对象的类型，并实现一些具体同事类之间的公共功能，比如，每个具体同事类都应该知道中介者对象，也就是每个同事对象都会持有中介者对象的引用，这个功能可定义在这个类中。

ConcreteColleague：具体的同事类，实现自己的业务，需要与其他同事对象交互时，就通知中介对象，中介对象会负责后续的交互。

**优点**

适当地使用中介者模式可以避免同事类之间的过度耦合，使得各同事类之间可以相对独立地使用。
使用中介者模式可以将对象间一对多的关联转变为一对一的关联，使对象间的关系易于理解和维护。
使用中介者模式可以将对象的行为和协作进行抽象，能够比较灵活的处理对象间的相互作用。

**缺点**

“中介“承担了较多的责任，所以一旦这个中介对象出现了问题，那么整个系统就会受到重大的影响。

**适用场景**

在面向对象编程中，一个类必然会与其他的类发生依赖关系，完全独立的类是没有意义的。一个类同时依赖多个类的情况也相当普遍，既然存在这样的情况，说明，一对多的依赖关系有它的合理性，适当的使用中介者模式可以使原本凌乱的对象关系清晰，但是如果滥用，则可能会带来反的效果。一般来说，只有对于那种同事类之间是网状结构的关系，才会考虑使用中介者模式。可以将网状结构变为星状结构，使同事类之间的关系变的清晰一些
中介者模式是一种比较常用的模式，也是一种比较容易被滥用的模式。对于大多数的情况，同事类之间的关系不会复杂到混乱不堪的网状结构，因此，大多数情况下，将对象间的依赖关系封装的同事类内部就可以的，没有必要非引入中介者模式。滥用中介者模式，只会让事情变的更复杂。

**扩展**

在同事类发生变化的时候，如果有多个中介者，可使用观察者模式将该类的变化告知所有与他有关联的中介者。