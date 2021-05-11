
namespace Web_Service.Models
{
    public class PoliceStationInfo
    {
        public int Id { get; set; }

        public string Name { get; set; }

        public string AdmArea { get; set; }

        public string Address { get; set; }

        public System.Collections.Generic.List<Contact> PublicPhone { get; set; } = new System.Collections.Generic.List<Contact>();

        public string ExtraInfo{ get; set; }

    }
}