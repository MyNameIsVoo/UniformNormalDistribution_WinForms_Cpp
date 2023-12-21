**Всем привет! ✌**

# Моделирование независимых случайных величин имеющих равномерное и нормальное распределение

4 темы, которые будут рассмотрены:
* Моделирование равномерного распределения
* Моделирование нормального (Гауссовского) распределения
* Моделирование нормального распределения с заданной плотностью.
* Моделирование распределения Хи-квадрат
  
## **1) Моделирование равномерного распределения**

Равномерное распределение – прямоугольное распределение, специальный вид распределения вероятностей случайной величины (коротко с.в.).

Будем говорить, что с.в. ξ имеет равномерное распределение на отрезке [a,b] и писать ξ ∈∪ab, ξ- если координата точки, брошенной наудачу на отрезок [a,b] числовой прямой. Это распределение можно задать и с помощью функции распределения:

![image](https://github.com/MyNameIsVoo/UniformNormalDistribution_WinForms_Cpp/assets/95473945/18d86d2d-6ebb-4841-bb04-ac8365eab498)

Необходимо получить N реализаций по равномерному закону распределения Rav[0,1].

![image](https://github.com/MyNameIsVoo/UniformNormalDistribution_WinForms_Cpp/assets/95473945/2bdc5106-5288-4f2c-a0cf-6b8335ea2ae6)

![image](https://github.com/MyNameIsVoo/UniformNormalDistribution_WinForms_Cpp/assets/95473945/226b2005-5249-4230-9601-9a2e155edc44)

### Построение гистограммы

![image](https://github.com/MyNameIsVoo/UniformNormalDistribution_WinForms_Cpp/assets/95473945/f24b89ba-3bf1-4ba9-a4f6-30d6a255fef3)

### Построение сигма коридора в MathLab

![image](https://github.com/MyNameIsVoo/UniformNormalDistribution_WinForms_Cpp/assets/95473945/8fb53a26-6dc5-43e8-ba56-7fa94b230d37)

## **2) Моделирование нормального (Гауссовского) распределения**

Нормальное распределение – распределение вероятностей случайной величины ξ, возникающее обычно, когда ξ представляет собой сумму большого числа независимых с.в., каждая из которых играет в образовании всей суммы незначительную роль.

![image](https://github.com/MyNameIsVoo/UniformNormalDistribution_WinForms_Cpp/assets/95473945/4b52b999-9bb2-411f-b1c6-e7e0c43e4da2)

Необходимо получить N реализаций по равномерному закону распределения ξ= Norm[0,1].

![image](https://github.com/MyNameIsVoo/UniformNormalDistribution_WinForms_Cpp/assets/95473945/f28f1886-36e6-4295-9825-68ad49fedf7f)

### Построение гистограммы

![image](https://github.com/MyNameIsVoo/UniformNormalDistribution_WinForms_Cpp/assets/95473945/cf1a642e-9c31-4be6-8ba5-920d6ffd2c8b)

### Построение сигма коридора в MathLab

![image](https://github.com/MyNameIsVoo/UniformNormalDistribution_WinForms_Cpp/assets/95473945/e96a17f0-5a43-4db5-a3da-c012fff45a9d)

## **3) Моделирование распределения случайной величины по нормальному закону с параметрами [0;σ], σ=6.**

Необходимо получить N реализаций по равномерному закону распределения ξ= Norm[0,6].

![image](https://github.com/MyNameIsVoo/UniformNormalDistribution_WinForms_Cpp/assets/95473945/a752870e-189b-4c7d-a093-3767e441f674)

### Построение гистограммы

![image](https://github.com/MyNameIsVoo/UniformNormalDistribution_WinForms_Cpp/assets/95473945/8b368d69-9266-477e-a985-ef9cf858dde8)

### Построение сигма коридора в MathLab

![image](https://github.com/MyNameIsVoo/UniformNormalDistribution_WinForms_Cpp/assets/95473945/cbb2964e-bfa5-4db8-9ac4-01e65ace7818)

## **4) Моделирование распределения Хи-квадрат**

![image](https://github.com/MyNameIsVoo/UniformNormalDistribution_WinForms_Cpp/assets/95473945/3db362a9-00c4-4526-90b7-2c5689a0de00)

где случайные величины X1, X2,…, Xn независимы и имеют одно и тоже распределение N(0,1). При этом число слагаемых, т.е. n, называется «числом степеней свободы» распределения хи – квадрат.

Распределение хи-квадрат используют при оценивании дисперсии (с помощью доверительного интервала), при проверке гипотез согласия, однородности, независимости, прежде всего для качественных (категоризованных) переменных, принимающих конечное число значений, и во многих других задачах статистического анализа данных.

Необходимо получить N реализаций по закону распределения ![image](https://github.com/MyNameIsVoo/UniformNormalDistribution_WinForms_Cpp/assets/95473945/54f833b1-3759-4ff4-9684-4f3e5d37ce11).

### Определим числовые характеристики

![image](https://github.com/MyNameIsVoo/UniformNormalDistribution_WinForms_Cpp/assets/95473945/20ac08eb-e64f-4a3c-bc18-0ac488349e7c)

### Построение гистограммы

![image](https://github.com/MyNameIsVoo/UniformNormalDistribution_WinForms_Cpp/assets/95473945/7cd4c244-4fe8-460b-aa14-05bbe4cbd8e1)

### Построение сигма коридора в MathLab

![image](https://github.com/MyNameIsVoo/UniformNormalDistribution_WinForms_Cpp/assets/95473945/7ec6fdcd-a082-49a3-9826-c44b8e47c456)
![image](https://github.com/MyNameIsVoo/UniformNormalDistribution_WinForms_Cpp/assets/95473945/41c823a6-58ef-41db-b712-2b23b9b23cfa)

> [!WARNING]
> **ВНИМАНИЕ!** Это мой первый опыт ведения подобного дневника. Есть замечания - пишите! Есть предложения - пишите! Я вас слушаю и слышу! Спасибо за внимание!

## Внешний вид программы

![image](https://github.com/MyNameIsVoo/UniformNormalDistribution_WinForms_Cpp/assets/95473945/8910aa26-a3c9-4762-9cea-a52bd9bda64a)
![image](https://github.com/MyNameIsVoo/UniformNormalDistribution_WinForms_Cpp/assets/95473945/7d29697f-148a-4ea1-87b2-be6291f10c29)


# Ссылки

## Если нужен код без воды - вам сюда
> Ссылка с консольными: [Консольные](https://github.com/MyNameIsVoo/MyWorks_Cpp/blob/master/README.md)
