//
//  HFViewController.m
//  HFLogBeaver
//
//  Created by liuhongfei on 01/21/2025.
//  Copyright (c) 2025 liuhongfei. All rights reserved.
//

#import "HFViewController.h"
#import <HFLogBeaver/HFLogger.h>

@interface HFViewController ()

@end

@implementation HFViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
	// Do any additional setup after loading the view, typically from a nib.
    
    [[HFLogger defaultManager] initLogger];
    HFLogInfo(@"测试日志打印");
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
