//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VisualTestKit/NSObject-Protocol.h>

@protocol VTKColor;

@protocol VTKColorDifferenceStrategy <NSObject>
@property(readonly, nonatomic) double tolerance;
- (double)differenceBetweenColor:(id <VTKColor>)arg1 andColor:(id <VTKColor>)arg2;

@optional
- (double)antiAliasingDifferenceBetweenColor:(id <VTKColor>)arg1 andColor:(id <VTKColor>)arg2;
@end

