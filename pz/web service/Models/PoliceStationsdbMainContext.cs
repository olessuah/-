using Microsoft.EntityFrameworkCore;

namespace Web_Service.Models
{
    public class PoliceStationsdbMainContext : DbContext
    {
        public PoliceStationsdbMainContext()
        {
        }

        public DbSet<PoliceStationInfo> PoliceStations { get; set; }

        public PoliceStationsdbMainContext(DbContextOptions<PoliceStationsdbMainContext> options)
            : base(options)
        {
            //Database.EnsureDeleted();
            Database.EnsureCreated();           
        }
    }
}