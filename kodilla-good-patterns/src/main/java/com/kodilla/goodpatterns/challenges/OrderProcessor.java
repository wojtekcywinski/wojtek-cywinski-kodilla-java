package com.kodilla.goodpatterns.challenges;

public class OrderProcessor {

        private InformationService informationService;
        private OrderService saleService;
        private OrderRepository saleRepository;

        public OrderProcessor(final InformationService informationService,
                              final OrderService saleService,
                              final OrderRepository saleRepository) {
            this.informationService = informationService;
            this.saleService = saleService;
            this.saleRepository = saleRepository;
        }

        public OrderDTO process(final OrderRequest saleRequest) {
            boolean isSaled = saleService.sale(saleRequest.getUser(), saleRequest.getDateOfSale(),
                    saleRequest.getProduct());

            if(isSaled) {
                informationService.inform(saleRequest.getUser());
                saleRepository.createSale(saleRequest.getUser(), saleRequest.getDateOfSale(), saleRequest.getProduct());
                return new OrderDTO(saleRequest.getUser(), true);
            } else {
                return new OrderDTO(saleRequest.getUser(), false);
            }
        }
    }
