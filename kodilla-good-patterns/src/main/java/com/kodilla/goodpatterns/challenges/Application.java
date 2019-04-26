package com.kodilla.goodpatterns.challenges;

public class Application {

    public static void main (String[] args) {
        OrderRequestRetriever saleRequestRetriever = new OrderRequestRetriever();
        OrderRequest saleRequest = saleRequestRetriever.retrieve();

        OrderProcessor saleProcessor = new OrderProcessor(new MailService(), new ProductOrderService(), new ProductOrderRepository());
        saleProcessor.process(saleRequest);
    }
}
