-- Insert rows into table 'Employees'
INSERT INTO Employees
   ([EmployeesId],[Name],[Location])
VALUES
   ( 1, N'Jared', N'Australia'),
   ( 2, N'Nikita', N'India'),
   ( 3, N'Tom', N'Germany'),
   ( 4, N'Jake', N'United States')
GO  
-- Query the total count of employees
SELECT COUNT(*) as EmployeeCount FROM dbo.Employees;
-- Query all employee information
SELECT e.EmployeesId, e.Name, e.Location 
FROM dbo.Employees as e
GO