//
//  ElLocoTools.h
//  ElLocoTools
//
//  Created by Sergiu Chirila on 6/4/13.
//  Copyright (c) 2013 Sergiu Chirila. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@class XMLWriter;

@interface ElLocoTools : NSObject

+ (bool)runningSimulator;
+ (bool)systermVersionLaterThan:(NSString *)version;
+ (int)getObjectId;
+ (int)getTransUnitId;
+ (int)getScreenId;
+ (NSString *)getCurrentViewControllerName;
+ (void)openNewGroupInXlf:(XMLWriter *)xlfRoot forView:(UIView *)view;
+ (void)closeGroupInXlf:(XMLWriter *)xlfRoot;
+ (NSString *)getUniqueIdBasedOnValue:(NSString *)value andLeftPlusTop:(CGFloat)leftPlusTop;
+ (BOOL)isSegmentLocalizable:(NSString *)md5Segment;
+ (NSArray *)getMatchingSegmentsForMd5:(NSString *)md5Segment;

+ (BOOL)createXliffAsStringFromViewController:(UIViewController *)viewController;
+ (BOOL)tryGenerateXlfForViewController:(UIViewController *)viewController;

//+ (NSString *)md5_scenario3_ofViewController:(UIViewController *)viewController;
+ (void)md5_ofViewController:(UIViewController *)viewController withMd5Structure:(NSMutableString **)md5Structure andMd5Localizables:(NSMutableString **)md5Localizables andMd5NonLocalizables:(NSMutableString **)md5NonLocalizables;

// public API
+ (void)setupWithGuid:(NSString *)guid;

@end
