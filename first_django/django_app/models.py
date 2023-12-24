from django.db import models

# Create your models here
class Product(models.Model):
    name = models.CharField(max_length = 100)
    description = models.TextField()
    price = models.DecimalField(max_digits = 10, decimal_places = 2)
    stock = models.IntegerField(default = 0)

class Item(models.Model):
    name = models.CharField(max_length = 200)
    created = models.DateTimeField(auto_now_add = True)
