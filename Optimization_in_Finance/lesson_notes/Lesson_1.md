# Lesson No.1 


## Partial Derivatives

1. Partielle Ableitung der Funktion nach jeder der n Variablen
2. Dort wo alle partielle ableitungen einen Nullpunkt haben ist ein critical point
> ein critical point ist ein punkt an dem die funktion nicht mehr steigt oder fällt, dabei kann es sich um ein maximum, ein minimum, ein sattelpunkt oder um nichts handeln.
3. Um herauszufinden um welche art es sich handelt, nimmt man die zweite ableitung aller partiellen Ableitungen.

4. Mit den Werten aus der Ableitung of the second order kann nun eine Hessematrix gebildet werden.

> Bei der Hessematrix handelt es sich um eine Matrix die aus den zweiten Ableitungen der Funktion besteht. 
Die Hessematrix ist symmetrisch und hat die Dimension n x n. <br> ![Hessematrix](https://wikimedia.org/api/rest_v1/media/math/render/svg/d2b255c49df2a6e084b9196ab71a68872a739ead)

5. Von Links oben nach rechts unten lassen sich submatritzen bilden.
6. Von diese submatritzen lässt sich nun die Determinante bilden. Im englishen die Minors



### Task: Find the critical points of the following function 
$$ f(x,y,z) = 2x^2 + xy + 4y^2 + xz + z^2 +2 $$

<br>

$$ 1.\ First\ Derivation $$
$$ fx(x,y,z) = 4x + y + z $$
$$ fy(x,y,z) = x + 8y $$
$$ fz(x,y,z) = x + 2z $$

<br>

$$ 2.\ Critical Points $$
$$ fx(p) = 4x + y + z = 0 => x = 0 $$
$$ fy(p) = x + 8y = 0  => y = -\frac{x}{8} $$
$$ fz(p) = x + 2z = 0 => z = -\frac{x}{2} $$

<br>

$$ 3.\ Second\ Derivation$$
$$ \begin{align*} 
fxx(x,y,z) = 4 && fxy(x,y,z) = 1 && fxz(x,y,z) = 1 && \\
fyx(x,y,z) = 1 && fyy(x,y,z) = 8 && fyz(x,y,z) = 0 && \\
fzx(x,y,z) = 1 && fzy(x,y,z) = 0 && fzz(x,y,z) = 2  
\end{align*} $$

<br>

$$ 4.\ Hessematrix $$
$$ \begin{bmatrix} 4 & 1 & 1 \\ 1 & 8 & 0 \\ 1 & 0 & 2 \end{bmatrix} $$

<br>

$$ 5.\ Submatritzen\ and\ determinants$$ 
$$ \begin{bmatrix} 4  \end{bmatrix}\  =>\ \Delta,(p) = 4$$
$$ \begin{bmatrix} 4 & 1 \\ 1 & 8 \end{bmatrix} => \ \Delta,(p) = 31$$
$$ \begin{bmatrix} 4 & 1 & 1 \\ 1 & 8 & 0 \\ 1 & 0 & 2 \end{bmatrix} => \ \Delta,(p) = 54$$