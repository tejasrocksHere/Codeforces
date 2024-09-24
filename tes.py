import requests
import concurrent.futures
import time

# Function to fetch data from the API


def fetch_data(thread_id):
    try:
        response = requests.get(
            'https://bjporzn.cyou/home.html')  # Set a timeout
        if response.status_code == 200:
            try:
                data = response  # Try parsing JSON
                print(f"Thread {thread_id} - Fetched data: {data}")
            except ValueError:
                print(
                    f"Thread {thread_id} - Error: Received invalid JSON response")
        else:
            print(
                f"Thread {thread_id} - Failed to fetch data. Status code: {response.status_code}")
    except requests.exceptions.Timeout:
        print(f"Thread {thread_id} - Request timed out")
    except requests.exceptions.RequestException as e:
        print(f"Thread {thread_id} - Error: {str(e)}")

# Create 100 threads to fetch data concurrently


def main():
    while True:
        with concurrent.futures.ThreadPoolExecutor(max_workers=100) as executor:
            futures = [executor.submit(fetch_data, i) for i in range(100)]
        concurrent.futures.wait(futures)


if __name__ == "__main__":
    main()
