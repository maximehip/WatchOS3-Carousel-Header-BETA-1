//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray<CSLPageViewCenteringPolicyItem>, NSMutableArray, NSString;

@interface CSLPageViewCentering : NSObject
{
    unsigned int _defaultCenter;
    NSArray<CSLPageViewCenteringPolicyItem> *_fromArray;
    NSArray<CSLPageViewCenteringPolicyItem> *_toArray;
    unsigned int _fromCenter;
    NSString *_blacklistedCenter;
    NSMutableArray *_policies;
}

+ (id)pageViewCenteringWithDefaultCenter:(unsigned int)arg1;
@property(retain, nonatomic) NSMutableArray *policies; // @synthesize policies=_policies;
@property(copy, nonatomic) NSString *blacklistedCenter; // @synthesize blacklistedCenter=_blacklistedCenter;
@property(nonatomic) unsigned int fromCenter; // @synthesize fromCenter=_fromCenter;
@property(nonatomic) __weak NSArray<CSLPageViewCenteringPolicyItem> *toArray; // @synthesize toArray=_toArray;
@property(nonatomic) __weak NSArray<CSLPageViewCenteringPolicyItem> *fromArray; // @synthesize fromArray=_fromArray;
@property(nonatomic) unsigned int defaultCenter; // @synthesize defaultCenter=_defaultCenter;
- (void).cxx_destruct;
- (unsigned int)evaluateToCenter;
- (void)addPolicy:(id)arg1;

@end

