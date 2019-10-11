//
//  LYZViewController.m
//  LYZStatistic
//
//  Created by 流浪者 on 09/28/2019.
//  Copyright (c) 2019 流浪者. All rights reserved.
//

#import "LYZViewController.h"
#import <LYZStatistic/LYZRootObject.h>
//#import <LYZStatistic/StatisticSdk.h>

@interface LYZViewController ()

@end

@implementation LYZViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
	// Do any additional setup after loading the view, typically from a nib.
//    [[SPStatisticSdk sharedInstance] initSdk:@"http://s.dlgzssf.com/s" productPublicKey:@"lifeadvisor-ios" appleId:@"bf54ebf2e8734af2bc1c55187b6032a4" abtestId:@"1" channelId:1 afDevKey:@"o6XxR94NFNcyL6NTzsUrRG" isLogEnable:true];
    
    [LYZRootObject sayHello];
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
