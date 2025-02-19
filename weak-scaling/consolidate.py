import os
import pandas as pd
import sys

outfile = 'times.csv' if len(sys.argv) < 2 else sys.argv[1]
data = []



for filename in os.listdir('.'):
    if filename.endswith('.time'):
        # Try to split and remove the extension
        try:
            base_name = filename[:-5]
            if base_name.endswith('1d'):
                continue
            node,task,thread,element,message,step = map(int, base_name.split('_'))
            
            with open(filename, 'r') as file:
                values = [line.strip() for line in file if line.strip()]
                build_time = values[0]
                run_time = values[1]
                local_memory_usage = values[2]
                global_memory_usage = values[3]
            data.append({
                'Node Count' : node,
                'Tasks Per Node' : task,
                'Thread Count' : thread,
                'Side Length' : element,
                'Message Count' : message,
                'Step Count' : step,
                'Build Time' : build_time,
                'Run Time' : run_time,
                'Local Memory Usage' : local_memory_usage,
                'Global Memory Usage' : global_memory_usage
            })
        except ValueError:
            print(f'Skipping invalid file: {filename}')
        except IndexError:
            print(f'Skipping possibly empty file: {filename}')

df = pd.DataFrame(data)


df.to_csv(outfile, index=False)
print("Wrote to ", outfile)
