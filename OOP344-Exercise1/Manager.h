class Employee;

class Manager
   {
   private:
      int totalHours;
   protected:
   public:
	   //change private to public
      Manager();

      void getWorkerHours(Employee* emp);

      void report();
   };