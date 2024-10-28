CXX = g++
CXXFLAGS = -std=c++17 -Wall -Iinclude

TARGET = uav
OBJS = main.o src/GNSS.o src/INS.o src/Logger.o src/Trajectory.o src/Coordinate.o src/KalmanFilter.o

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) -o $(TARGET) $(OBJS)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(TARGET) $(OBJS)
