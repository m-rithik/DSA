//1108. Defanging an IP Address

class Solution {
    public String defangIPaddr(String address) {
      return address.replace(".", "[.]");
    }
  }

  /*
   replace keyword; regex_replace in c++(regex_replace(address, regex("[.]"), "[.]"))
   */