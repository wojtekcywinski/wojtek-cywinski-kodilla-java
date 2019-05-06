package com.kodilla.hibernate.invoice.dao;

import com.kodilla.hibernate.invoice.Invoice;
import com.kodilla.hibernate.invoice.Item;
import com.kodilla.hibernate.invoice.Product;
import org.junit.Assert;
import org.junit.Test;
import org.junit.runner.RunWith;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.boot.test.context.SpringBootTest;
import org.springframework.test.context.junit4.SpringRunner;

import java.math.BigDecimal;

@RunWith(SpringRunner.class)
@SpringBootTest
public class InvoiceDaoTestSuite {
    @Autowired
    private InvoiceDao invoiceDao;

    @Test
    public void testInvoiceDaoSave() {
        //Given
        Product product = new Product("Notebook");
        Product product2 = new Product("Glue");
        Product product3 = new Product("Scissors");

        Item item1 = new Item(new BigDecimal(4), 1, new BigDecimal(4));
        Item item2 = new Item(new BigDecimal(7), 1, new BigDecimal(7));
        Item item3 = new Item(new BigDecimal(14), 1, new BigDecimal(14));

        product.setItem(item1);
        product2.setItem(item2);
        product3.setItem(item3);

        Invoice invoice = new Invoice("1");
        invoice.getItems().add(item1);
        invoice.getItems().add(item2);
        invoice.getItems().add(item3);
        item1.setInvoice(invoice);
        item2.setInvoice(invoice);
        item3.setInvoice(invoice);

        //When
        invoiceDao.save(invoice);
        int id = invoice.getId();

        //Then
        Assert.assertNotEquals(0, id);
    }
}