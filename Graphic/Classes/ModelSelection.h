//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: src/rk/or/android/ModelSelection.java
//
//  Created by remi on 24/03/13.
//

@class AndroidOsBundle;
@class AndroidViewView;
@class AndroidViewViewGroup;
@class AndroidWidgetAdapterView;
@class IOSObjectArray;

#import "JreEmulation.h"
#import "Activity.h"
#import "AdapterView.h"
#import "BaseAdapter.h"

@interface AndroidModelSelection : AndroidAppActivity < AndroidWidgetAdapterView_OnItemClickListener > {
 @private
  IOSObjectArray *mThumbIds_;
  IOSObjectArray *mModels_;
}

@property (nonatomic, strong) IOSObjectArray *mThumbIds;
@property (nonatomic, strong) IOSObjectArray *mModels;

- (void)onCreateWithAndroidOsBundle:(AndroidOsBundle *)savedInstanceState;
- (void)onItemClickWithAndroidWidgetAdapterView:(AndroidWidgetAdapterView *)parent
                            withAndroidViewView:(AndroidViewView *)view
                                        withInt:(int)position
                                    withLongInt:(long long int)id_;
- (id)init;
@end

@interface AndroidModelSelection_AppsAdapter : AndroidWidgetBaseAdapter {
 @private
  AndroidModelSelection *this$0_;
}

@property (nonatomic, strong) AndroidModelSelection *this$0;

- (AndroidViewView *)getViewWithInt:(int)position
                withAndroidViewView:(AndroidViewView *)convertView
           withAndroidViewViewGroup:(AndroidViewViewGroup *)parent;
- (int)getCount;
- (id)getItemWithInt:(int)position;
- (long long int)getItemIdWithInt:(int)position;
- (id)initWithAndroidModelSelection:(AndroidModelSelection *)outer$;
@end
