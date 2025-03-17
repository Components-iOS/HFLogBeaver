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
    [logger setupLogBeaver];
    
    HFLogInfo(@"%@", [logger getLogFilePath]);
    HFLogInfo(@"%@", [logger getLogPrefixName]);

    [self log:@"111" str1:@"222" str2:@"333"];
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
