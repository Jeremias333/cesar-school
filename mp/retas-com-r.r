#R version 3.4.4 

#atribuir
x <- 10

#constantes
y = 5
#y <- 5

#concatenar
print(paste("valor de x: ", y))

#sequencia
t <- 1:10

#elevado sequencia de 1 ate 10
z <- 1:10^2

#print
z

#plot(x, y, col=3)
curve(x^2, col=2, add=TRUE)


##############parabola####################
x <- 1:10
x

y <- (1:10)^2
y

curve(x^2, from=-3, to=3, col=4)
#curve(3*x, col=2, add=TRUE)

############duas parabolas###############

#x <- 1:10
#x

#y <- (1:10)^2
#y

#curve(x^2, from=-3, to=3, col=4)
#curve(-x^2, from=3, to=-3, col=2, add=TRUE)

x <- 1:10 
x 
y <- (1:10)^2 
y 
#plot(x, y, col=3) 
#curve(x^2, from = -3, to=3,col=4) 
#curve(3*x, from = -3, to=3, col=2,add=FALSE) 
curve(x^2, from = -10, to = 10, xlab ="Eixo x", ylab = "Eixo y", main= "Título", col=2) 
curve(x^2+10, from = -10, to = 10, col=3, add=TRUE)


#############linhas paralelas###############

curve(x+2, from = -10, to = 10, xlab ="Eixo x", ylab = "Eixo y", main= "Título", col=2) 
curve(2*x+2, from = -10, to = 10, col=4, add=TRUE) 
abline(v=0, col="blue") 
abline(h=2, col="green") 


############equacao do segundo grau########

a =1; 
b = -2; 
c = -3 
x1 = (-b - sqrt(b^2-4*a*c))/(2*a) 
x2 = (-b + sqrt(b^2-4*a*c))/(2*a) 
x1; x2