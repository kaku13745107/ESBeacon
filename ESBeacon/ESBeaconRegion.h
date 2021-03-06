//
//  ESBeaconRegion.h
//  ESBeacon
//
//  Created by Enamel Systems on 2013/12/31.
//  Copyright (c) 2014 Enamel Systems. All rights reserved.
//

#import <CoreLocation/CoreLocation.h>

#define ESBeaconRegionFailCountMax   3

@interface ESBeaconRegion : CLBeaconRegion
@property (nonatomic) BOOL rangingEnabled;
@property (nonatomic) BOOL isMonitoring;
@property (nonatomic) BOOL hasEntered;
@property (nonatomic) BOOL isRanging;
@property (nonatomic) NSUInteger failCount;
@property (nonatomic) NSArray *beacons;
- (void)clearFlags;
@end
