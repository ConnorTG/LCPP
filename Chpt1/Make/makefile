book: ../Src/Code/bookstore.cpp sales_item.o
	g++ -o book ../Src/Code/bookstore.cpp sales_item.o

sales_item.o: ../Src/Code/Sales_item.cpp
	g++ -c -o sales_item.o ../Src/Code/Sales_item.cpp

clean:
	rm book

run:
	./book