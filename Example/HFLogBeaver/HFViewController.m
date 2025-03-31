//
//  HFViewController.m
//  HFLogBeaver
//
//  Created by liuhongfei on 01/21/2025.
//  Copyright (c) 2025 liuhongfei. All rights reserved.
//

#import "HFViewController.h"
#import <HFLogBeaver_Example-Swift.h>
#import <HFLogBeaver/HFLogBeaver-Swift.h>
#import <HFLogBeaver/OCLogger.h>

@interface HFViewController ()

@end

@implementation HFViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
	// Do any additional setup after loading the view, typically from a nib.
    
    OCLogger *logger = [OCLogger defaultManager];
    logger.enableFileLog = YES;
    logger.logFileMaxSize = 128 * 1024;
    [logger setupLogBeaver];
        
    HFLogInfo(@"%@", [logger getLogFilePath]);
    HFLogInfo(@"%@", [logger getLogPrefixName]);
    
    dispatch_queue_t queue = dispatch_get_global_queue(DISPATCH_QUEUE_PRIORITY_DEFAULT, 0);
    dispatch_source_t timer = dispatch_source_create(DISPATCH_SOURCE_TYPE_TIMER, 0, 0, queue);
    dispatch_source_set_timer(timer, DISPATCH_TIME_NOW, 0.5 * NSEC_PER_SEC, 0);

    dispatch_source_set_event_handler(timer, ^{
        for (int i = 0; i < 1000; i++) {
            [self log:@"111" str1:@"222" str2:@"333"];
        }
    });

    dispatch_resume(timer);
    
    [[NSRunLoop mainRunLoop] run];
}

- (void)log:(NSString *)str str1:(NSString *)str1 str2:(NSString *)str2 {
    HFLogInfo(@"%@ %@ %@", str, str1, str2);
}

- (void)touchesBegan:(NSSet<UITouch *> *)touches withEvent:(UIEvent *)event {
    HFSwiftController *swiftVC = [HFSwiftController new];
    [self presentViewController:swiftVC animated:YES completion:nil];
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
