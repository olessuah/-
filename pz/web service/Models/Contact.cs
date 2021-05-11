
namespace Web_Service.Models
{
    public class Contact
    {
        public int Id { get; set; }

        public string Phone { get; set; }

        public System.Collections.Generic.List<PoliceStationInfo> PoliceStationInfo { get; set; } = new System.Collections.Generic.List<PoliceStationInfo>();

    }
}