//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NSObject-Protocol.h>

@protocol NTKComplicationDisplayObserver;

@protocol NTKComplicationDisplay <NSObject>
@property(nonatomic) _Bool canUseCurvedText;
@property(nonatomic) __weak id <NTKComplicationDisplayObserver> displayObserver;

@optional
@property(nonatomic) _Bool shouldUseTemplateColors;
@property(nonatomic, getter=isHighlighted) _Bool highlighted;
- (void)setEditing:(_Bool)arg1;
- (void)setMaxSize:(struct CGSize)arg1;
@end

