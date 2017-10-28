# Prelewd

An integral domain is a nonzero commutative ring
in which the product of any two nonzero elements is nonzero.

For absolute value in integral domain

* |x| ≥ 0 (non-negativity)
* |x| = 0 <=> x = 0 (positive definiteness)
* |x y| = |x| |y| (multiplicativity)
* |x + y| ≤ |x| + |y| (triangle inequality)

An ordered integral domain is an integral domain with property P satisfying

P a && P b ==> P (a + b)
P a && P b ==> P (a * b)
P a || P -a || (a == 0)

This P induces total ordering.
For absolute value in totally ordered integral domain

|a| = \begin{cases}
a, 0 \le a \\
-a, a < 0
% No other option!
\end{cases}
