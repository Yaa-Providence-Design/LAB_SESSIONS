public class Trade{
	public String id;
	public String symbol;
	public int quantity;
	public float price;
	//constructor
	public Trade(String id, String symbol, int quantity, float price){
		this.id = id;
		this.symbol = symbol;
		this.quantity = quantity;
		this.price = price;
	
	}
	//second constructor without price
	public Trade(String id, String symbol, int quantity){
		this.id = id;
		this.symbol = symbol;
		this.quantity = quantity;
	}
	//toString() method for trade
	@Override
	public String toString(){
		return String.format("id" + this.id + "symbol" + this.symbol + "quantity" + this.quantity + "price" + this.price);

	}
	public void setPrice(float price){
		this.price = price;
	}


	public static void mian(String args[]){
		Trade newTrade = new Trade("T0001", "IBM", 20);
		newTrade.setPrice(58.2f);
		System.out.println(newTrade);
	
	}
}

