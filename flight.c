
struct flight_dest{
    struct flight_dest *column_next;
    int dest;
    int price;
};
struct flight{
    struct flight *row_next;
    struct flight_dest *fdest;
    int src;
    int price;
};

/*Algthrom:
 save the flight information
 get user input (src/dest/K)
 for X in dest->fdest:
    if currentK > userK:
        break
    curr-price += X.price
    if curr-price < minPrice:
        minPrice = curr-price
        //因为只有路径小时，继续寻找才有意义
        for Y in X->fdest:
            if currentK > userK:
                break
            for Z in Y->fdest:
                ....
iteration:
    input: NodeX, Node-Summay-Price, minPrice, NodeK, useK
    output: minPrice, 无需再返回值，直接在函数内部修改
存在问题：
    如果存在两地是循环的话，将会出现无用的计算量
    如果想要解决，需要记录路径
*/
