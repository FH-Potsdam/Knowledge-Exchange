install.packages("rworldmap")
require(rworldmap)
require("ggplot2")
summary(cars)


vec = c(1,20,30,40,100,200,200)
getwd()
setwd("/Users/icke/Desktop/GO-R-Knowledge-Exchange/CRAN/fiddle")
help(plot)
summary(vec)

# plot(vec,cars$dist[1:7], type="b", main="Hello World")
cars
gg <- ggplot(cars, aes(x=speed,y=dist)) + geom_point(shape=13)
# gg <- geom_line(data = cars)
gg