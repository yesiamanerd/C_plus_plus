#include <string>

class Invoice {
    public: 
        explicit Invoice(std::string, std::string, int, int);
        void setPartNumber(std::string);
        std::string getPartNumber();
        void setPartDescription(std::string);
        std::string getPartDescription();
        void setQuantity(int);
        int getQuantity();
        void setPrice(int);
        int getPrice();
        int getInvoiceAmount();
    private:
        std::string partNumber;
        std::string partDescription;
        int quantity;
        int price;

};