package com.kodilla.goodpatterns.food2door;

import static com.kodilla.goodpatterns.food2door.OrderFinalization.orderFinalize;
import static com.kodilla.goodpatterns.food2door.OrderInformationService.inform;

public class OrderProcessor {
    private ProducerService producerService;
    private OrderInformationService orderInformationService;
    private OrderFinalization orderFinalization;
    private Product product;
    private ProducentProvider producentProvider;

    public void orderProcess(Product product, ProducerService producerService) {
        inform();
        System.out.println(product.toString());
        System.out.println("Provider: " + producerService.getName());
        if (producerService.process(product)) {
            orderFinalize();
        } else {
            System.out.println("Ups! Sth went wrong");
        }
    }
}
