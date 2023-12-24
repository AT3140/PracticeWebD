from rest_framework.response import Response
from rest_framework.decorators import api_view
from django_app.models import Item, Product
from .serializers import ItemSerializer, ProductSerializer

@api_view(['GET'])
def getData(request):
    items = Item.objects.all()
    serializer = ItemSerializer(items, many=True)
    return Response(serializer.data)

@api_view(['POST'])
def addItem(request):
    serializer = ItemSerializer(data = request.data)
    if serializer.is_valid():
        serializer.save()
    return Response(serializer.data)

@api_view(['GET'])
def getProducts(request):
    products = Product.objects.all()
    serializer = ProductSerializer(products, many = True)
    return Response(serializer.data)

@api_view(['POST'])
def addProduct(request):
    serializer = ProductSerializer(data = request.data)
    if serializer.is_valid():
        serializer.save()
    return Response(serializer.data)
