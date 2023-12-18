# Занятие №3. Корреляция дискретных сигналов
## 1) Цель работы

Получить представление о том, что такое корреляционная функция и нормализованная взаимная корреляционная функция, как они вычисляются и какое отношение имеют к процедурам синхронизации в сетях мобильной связи. 

## 2) Краткие теоретические сведения

Корреляция – это статистическая зависимость двух и более случайных величин. Корреляционная взаимосвязь в случае с сетями мобильной связи и используемыми в них радиосигналами позволяет обнаруживать сигналы синхронизации для того, чтобы с их помощью корректно разбивать ось времени на интервалы, предусматриваемые стандартами связи (например, слоты, кадры и пр.).
Корреляция бывает положительная, когда два процесса на прямую зависят друг от друга, то есть увеличение одной величины вызывает пропорциональный рост другой и наоборот. Например, можно проследить рост объемов продаж мороженного при повышении суточной температуры. Отрицательная корреляция свидетельствует об обратной взаимосвязи процессов – рост суточной температуры приводит к снижению объема продаж пуховиков. Бывает также нейтральная корреляция, когда явная взаимосвязь между процессами отсутствует (например, связь курса доллара и среднего балла за ЕГЭ у выпускников неочевидна).

## 3) Задание для выполнения практической работы

В рамках данной работы студенты должны выполнить расчеты автокорреляции и взаимной корреляции, в том числе нормализованной, для различных сигналов, описанных ниже, используя языки C/C++ и Matlab.

Порядок выполнения работы:
1) Напишите на языке C/C++ функцию вычисления корреляции и нормализованной корреляции между массивами a, b и с, заданными в таблице 2, согласно варианту, используя формулы по измерению корреляции и по нормализации функции корреляции. Номер варианта – порядковый номер в журнале группы.

![../../image/tcAA5ATcsrk.jpg](https://github.com/Lera-XX/Mobile/blob/main/image/tcAA5ATcsrk.jpg)\

2) Выведите в терминале полученные значения в виде таблицы:

![../../photo_screenshots/image_1-2.png](https://github.com/Marina1825/Core/blob/main/image/image_1-2.png)

3) Используя Matlab определите корреляцию и нормализованую корреляцию между сигналом s1(t) и сигналами a и b.

![../../photo_screenshots/Var_3-7.png](https://github.com/Marina1825/Core/blob/main/image/Var_3-7.png)

где 𝑓1 = ваш порядковый номер в журнале;
𝑓2 = ваш порядковый номер в журнале + 4;
𝑓3 = ваш порядковый номер в журнале ∗ 2 + 1.
Сигналы a и b заданы согласно вариантам в таблице 3.

![../../image/Снимок экрана 2023-12-12 122654.png](https://github.com/Lera-XX/Mobile/blob/main/image/HPETj0aSQGw.jpg)

4) Для того чтобы задать время в Matlab можно воспользоваться выражением:
	time = [0:100-1]/100 
5) Возьмите два массива значений и выведите их на графиках друг под другом Определите значение функции взаимной корреляции.

![../../photo_screenshots/variant_3-7.png](https://github.com/Lera-XX/Mobile/blob/main/image/%D0%A1%D0%BD%D0%B8%D0%BC%D0%BE%D0%BA%20%D1%8D%D0%BA%D1%80%D0%B0%D0%BD%D0%B0%202023-12-12%20122654.png) 

6) Сдвигайте последовательность b поэлементно вправо и на каждом шаге сдвига вычисляйте значение взаимной корреляции между a и сдвинутой последовательностью b. Постройте зависимость взаимной корреляции последовательностей от величины циклического сдвига. Определите значение сдвига, при котором достигается максимальная корреляция. Нарисуйте графики a и b, сдвинутой на величину, где зафиксирована максимальная корреляция. Сформулируйте выводы.

![../../photo_screenshots/image_3-7(1).png](https://github.com/Marina1825/Core/blob/main/image/image_3-7(1).png)

![../../photo_screenshots/image_3-7.png](https://github.com/Marina1825/Core/blob/main/image/image_3-7.png)
